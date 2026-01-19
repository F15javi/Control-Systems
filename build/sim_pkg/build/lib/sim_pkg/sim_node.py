import rclpy
from rclpy.node import Node
from msgs_control.srv import SimPID  # Importa el mensaje de servicio personalizado

from sim_pkg.utils.Performance import Performance
from sim_pkg.utils.Controller import Controller

class SimPIDService(Node):
    def __init__(self):
        super().__init__('sim_pid_node')
        self.srv = self.create_service(SimPID, '/serv/sim_pid', self.sim_pid_callback)

        # Initialization of Performance, Controller, etc.
        self.P = Performance()
        self.controller = Controller()

        self.velocidad = []
        self.ut = []
        self.coordenadax = []

        self.Velocidad_de_referencia = 50.0

    def sim_pid_callback(self, request, response):
        self.P = Performance()
        self.controller = Controller()

        self.velocidad = []
        self.ut = []
        self.coordenadax = []

        self.Velocidad_de_referencia = 50.0
        # Obtain Kp, Ki, Kd from the request
        Kp = request.kp
        Ki = request.ki
        Kd = request.kd

        # Initialize the controller with the provided gains
        self.controller.Init(Kp, Ki, Kd)
        self.controller.Set_reference(self.Velocidad_de_referencia)

        # Execute controller cycles
        for ite in range(320):
            x, y = self.controller.Exec_controller_cycle()
            self.velocidad.append(x)
            self.ut.append(y)
            self.coordenadax.append(ite)

        # Calculate performance metrics
        self.P.Init(self.velocidad, self.Velocidad_de_referencia)
        overshoot, d, ess, Ts = self.P.Calcula_indexes()

        # Assign calculated values to response
        response.overshoot = overshoot
        response.d = d
        response.ess = ess
        response.ts = Ts

        # Clear lists for next service call
        self.velocidad.clear()
        self.ut.clear()
        self.coordenadax.clear()

        return response


def main(args=None):
    rclpy.init(args=args)
    manager = None
    try:
        manager = SimPIDService()
        rclpy.spin(manager)
    except KeyboardInterrupt:
        print(f'{manager.get_name()}: Keyboard interrupt')
        manager.destroy_node()
        rclpy.try_shutdown()
    except Exception:
        print(format_exc())

if __name__ == '__main__':
    main()
