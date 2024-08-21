import launch
import os
import yaml
import launch_ros
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument,ExecuteProcess,IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration,PythonExpression,Command
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    ld = LaunchDescription()

    bringup_tarkbot_driver = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('tarkbot_robot')),'launch','robot.launch.py'))
    )

    bringup_rplidar = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('rplidar_ros')),'launch','rplidar_tarkbot.launch.py'))
    )

    astra_launch_file = os.path.join(get_package_share_directory('astra_camera'), 'launch', 'astra.launch.xml')
    bringup_camera = ExecuteProcess(
        cmd=['ros2', 'launch', astra_launch_file],
        shell=True
    )

    ld.add_action(bringup_tarkbot_driver)
    ld.add_action(bringup_rplidar)
    ld.add_action(bringup_camera)

    return ld

