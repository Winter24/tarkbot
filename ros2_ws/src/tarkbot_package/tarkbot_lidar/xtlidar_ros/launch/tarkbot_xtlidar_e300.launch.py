#!/usr/bin/python3
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
from ament_index_python.packages import get_package_share_directory



def generate_launch_description():
    ld = LaunchDescription()
    
    lidar_config = os.path.join(get_package_share_directory('xtlidar_ros'),'params','XTLIDAR_E300.yaml')

    with open(lidar_config,'r') as f:
        params = yaml.safe_load(f)["xtlidar_driver2_node"]["ros__parameters"]

    lidar_node = Node(
            package="xtlidar_ros",
            executable="xtlidar_driver2_node",
            parameters=[params],
            output='screen',
            )


    
    

    ld.add_action(lidar_node)

    return ld