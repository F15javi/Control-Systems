from sim_pkg.utils.DC_motor_sim import DC_motor_sim
class Controller:
    def __init__(self):
        self.Kp = 0.0
        self.Ki = 0.0
        self.Kd = 0.0
        self.Angular_speed_reference = 0.0
        self.Controller_T = 0.001
        self.motor_sim = DC_motor_sim()
        self.motor_speed_anterior = 0
        self.I_anterior = 0
        self.D_anterior = 0

    def Init(self, new_Kp, new_Ki, new_Kd):
        self.Kp = new_Kp
        self.Ki = new_Ki
        self.Kd = new_Kd

        # Inicializar el motor
        self.motor_sim.init()
        

    def Set_reference(self, Angular_speed):
        self.Angular_speed_reference = Angular_speed

    def Exec_controller_cycle(self):
        motor_speed = DC_motor_sim.Give_me_speed(self.motor_sim)
        N = 8
        
        # Compute difference with previous speed and error respective to reference
        error_speed = self.Angular_speed_reference - motor_speed
        dif_speed = motor_speed - self.motor_speed_anterior
        
        # Compute control parameters
        try:
            P = self.Kp * error_speed
            if self.Ki != 0:
                I = self.I_anterior + ((self.Kp * self.Controller_T) / self.Ki) * error_speed
            else:
                I=0
            D = (self.Kd / (self.Kd + N * self.Controller_T)) * self.D_anterior - \
                ((self.Kp * self.Kd * N) / (self.Kd + N * self.Controller_T)) * dif_speed
        except Exception as e:
            print(f'Exception in PID {e}')
            P=0
            I=0
            D=0

        # Refresh control values from previous iteration
        self.I_anterior = I
        self.D_anterior = D
        
        # Prepare last error for next cycle       
        self.motor_speed_anterior = motor_speed
        
        # Compute controller output
        new_motor_voltage = P+I+D
        DC_motor_sim.Set_ea(self.motor_sim, new_motor_voltage)
        DC_motor_sim.Exec_cycle(self.motor_sim)

        return motor_speed, new_motor_voltage
    

if __name__ == '__main__':
    controller = Controller()
    Kp=0.1#0.1#0.5
    Ki=7#0.008#0.004
    Kd=0.6#0.0#0.º
    controller.Init(Kp, Ki, Kd)
    print('Init')
    controller.Set_reference(50.0)