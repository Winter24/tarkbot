# Copyright (c) 2018 Intel Corporation
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

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

    bringup_atom_driver = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('tarkbot_robot')),'launch','robot.launch.py'))
    )

    bringup_m1ct = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('m1ct_d2')),'launch','tarkbot_m1ct.launch.py'))
    )

    bringup_ld19lidar = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('ldlidar_stl_ros2')),'launch', 'tarkbot_ld19.launch.py'))
    )

    bringup_rplidar = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('rplidar_ros')),'launch','rplidar_tarkbot.launch.py'))
    )

    bringup_localization_cmd = IncludeLaunchDescription(
      PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('tarkbot_nav')),'launch','include','localization_launch.py'))
    ) 
    bringup_navigation_cmd = IncludeLaunchDescription(
      PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('tarkbot_nav')),'launch','include','navigation_core_launch.py'))
    )
    bringup_nav_cmd = IncludeLaunchDescription(
      PythonLaunchDescriptionSource(os.path.join(get_package_share_directory(('tarkbot_nav')),'launch','include', 'bringup_nav_launch.py'))
    )

    ld.add_action(bringup_atom_driver)
    # ld.add_action(bringup_ld19lidar)
    ld.add_action(bringup_rplidar)
    ld.add_action(bringup_m1ct)
    ld.add_action(bringup_localization_cmd)
    ld.add_action(bringup_navigation_cmd)
    # ld.add_action(bringup_nav_cmd)

    return ld

