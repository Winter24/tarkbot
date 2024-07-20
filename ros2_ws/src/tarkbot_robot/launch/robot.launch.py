

import launch
import os
import yaml
import launch_ros
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command     
from launch.actions import DeclareLaunchArgument,ExecuteProcess,IncludeLaunchDescription 
from launch.substitutions import LaunchConfiguration,PythonExpression,Command
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    tarkbot_config = os.path.join(get_package_share_directory('tarkbot_robot'),'config','tarkbot_config.yaml')

    with open(tarkbot_config,'r') as f:
        params = yaml.safe_load(f)["tarkbot_robot_node"]["ros__parameters"]

    robot_base = Node(
            package= "tarkbot_robot",                 #功能包。
            name= "tarkbot_robot_node", 
            executable= "tarkbot_robot_node",         #节点。
            parameters= [tarkbot_config],             #接入参数文件
            output= 'screen',
            emulate_tty=True
            )

    bringup_robot_description = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('tarkbot_description')),'launch','model.launch.py'))
    )

    base_to_laser = launch_ros.actions.Node(
            package='tf2_ros', 
            node_executable='static_transform_publisher', 
            node_name='base_to_laser',
            arguments=['0 ', '0', '0.06','0', '0','0','base_link','laser_link'],
    )

    ld.add_action(robot_base)
    ld.add_action(bringup_robot_description)
    ld.add_action(base_to_laser)
    
    return ld


