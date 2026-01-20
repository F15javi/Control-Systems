from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():

    config = os.path.join(
        get_package_share_directory('genetic_pkg'),
        'config',
        'genetico_conf.yaml'
    )
    return LaunchDescription([
        Node(
            package='genetic_pkg',  # Reemplaza con el nombre de tu paquete
            executable='genetic',  # Reemplaza con el nombre de tu nodo
            output='both'         # Puedes elegir 'screen', 'log' o 'both'
            name='sim_pid_client_sync',
            parameters=[config]  # Archivo de configuracion del algoritmo.

        )
    ])
