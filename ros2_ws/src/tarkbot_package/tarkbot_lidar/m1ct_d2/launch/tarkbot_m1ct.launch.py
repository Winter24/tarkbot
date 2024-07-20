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

    bringup_m1ct = Node(
            package= "m1ct_d2",                 #Function package.
            name= "m1ct_node", 
            executable= "m1ct_d2",             #node.
            output= 'screen',
            emulate_tty=True
            )

    ld.add_action(bringup_m1ct)

    return ld
