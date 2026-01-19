from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='sim_pkg',  # Reemplaza con el nombre de tu paquete
            executable='simulator',  # Reemplaza con el nombre de tu nodo
            output='screen'         # Puedes elegir 'screen', 'log' o 'both'
        )
    ])