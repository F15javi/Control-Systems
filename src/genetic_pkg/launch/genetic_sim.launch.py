from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='genetic_pkg',  # Reemplaza con el nombre de tu paquete
            executable='genetic',  # Reemplaza con el nombre de tu nodo
            output='both'         # Puedes elegir 'screen', 'log' o 'both'
        )
    ])