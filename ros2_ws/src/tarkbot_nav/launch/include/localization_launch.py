import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

from nav2_common.launch import RewrittenYaml

def generate_launch_description():
    # Get the launch directory
    bringup_dir = get_package_share_directory('tarkbot_nav')

    namespace = LaunchConfiguration('namespace')
    map_yaml_file = LaunchConfiguration('map')
    use_sim_time = LaunchConfiguration('use_sim_time')
    autostart = LaunchConfiguration('autostart')
    params_file = LaunchConfiguration('params_file')
    lifecycle_nodes = ['map_server', 'amcl']
    #lifecycle_nodes = ['map_server']

    remappings = [('/tf','tf'),('/tf_static', 'tf_static')]

    param_substitutions = {
            'use_sim_time': use_sim_time,
            'yaml_filename': map_yaml_file}

    configured_params = RewrittenYaml(
            source_file=params_file,
            root_key=namespace,
            param_rewrites=param_substitutions,
            convert_types=True)

    set_env_var = SetEnvironmentVariable('RCUTILS_LOGGING_BUFFERED_STREAM','1')

    declare_namespace_argument = DeclareLaunchArgument(
            'namespace', default_value='',
            description='Top-level namespace')
    
    declare_map_argument = DeclareLaunchArgument(
            'map',
            default_value=os.path.join(bringup_dir,'maps','test.yaml'),
            description='Full path to map yaml file to load')

    declare_use_sim_time_argument = DeclareLaunchArgument(
            'use_sim_time', default_value='false',
            description='Use simulation clock if true')
    
    declare_autostart_argument = DeclareLaunchArgument(
            'autostart', default_value='true',
            description='Automatically startup the nav2 stack')

    declare_paramsfile_argument = DeclareLaunchArgument(
            'params_file',
            default_value=os.path.join(bringup_dir,'config','navigation','nav2_params.yaml'),
            description='Full path to the ROS2 parameters file to use')

    map_server_node = Node(
            package='nav2_map_server',
            executable='map_server',
            name='map_server',
            output='screen',
            parameters=[configured_params],
            remappings=remappings)

    amcl_node = Node(
            package='nav2_amcl',
            executable='amcl',
            name='amcl',
            output='screen',
            parameters=[configured_params],
            remappings=remappings)

    lifecycle_node = Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_localization',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time},
                        {'autostart': autostart},
                        {'node_names': lifecycle_nodes}])

    ld = LaunchDescription()

    ld.add_action(set_env_var)
    ld.add_action(declare_namespace_argument)
    ld.add_action(declare_map_argument)
    ld.add_action(declare_use_sim_time_argument)
    ld.add_action(declare_autostart_argument)
    ld.add_action(declare_paramsfile_argument)

    ld.add_action(map_server_node)
    ld.add_action(amcl_node)
    ld.add_action(lifecycle_node)

    return ld
