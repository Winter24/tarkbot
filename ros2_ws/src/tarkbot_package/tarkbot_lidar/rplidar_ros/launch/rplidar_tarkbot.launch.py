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
    rplidar_config = os.path.join(get_package_share_directory('rplidar_ros'),'config','rplidar_config.yaml')
    with open(rplidar_config,'r') as f:
        params = yaml.safe_load(f)["rplidar_node"]["ros__parameters"]
    bringup_rplidar = Node(
            package= "rplidar_ros",                 #功能包。
            name= "rplidar_node", 
            executable= "rplidar_node",             #节点。
            parameters= [rplidar_config],           #接入参数文件。
            output= 'screen',
            emulate_tty=True
            )

    ld.add_action(bringup_rplidar)

    return ld
