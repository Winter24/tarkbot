# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xtark/tarkbot/ros2_ws/src/OrbbecSDK_ROS2/orbbec_camera

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xtark/tarkbot/ros2_ws/build/orbbec_camera

# Include any dependencies generated for this target.
include CMakeFiles/orbbec_camera_node.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/orbbec_camera_node.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/orbbec_camera_node.dir/flags.make

CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.o: CMakeFiles/orbbec_camera_node.dir/flags.make
CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.o: rclcpp_components/node_main_orbbec_camera_node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xtark/tarkbot/ros2_ws/build/orbbec_camera/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.o -c /home/xtark/tarkbot/ros2_ws/build/orbbec_camera/rclcpp_components/node_main_orbbec_camera_node.cpp

CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xtark/tarkbot/ros2_ws/build/orbbec_camera/rclcpp_components/node_main_orbbec_camera_node.cpp > CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.i

CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xtark/tarkbot/ros2_ws/build/orbbec_camera/rclcpp_components/node_main_orbbec_camera_node.cpp -o CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.s

# Object files for target orbbec_camera_node
orbbec_camera_node_OBJECTS = \
"CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.o"

# External object files for target orbbec_camera_node
orbbec_camera_node_EXTERNAL_OBJECTS =

orbbec_camera_node: CMakeFiles/orbbec_camera_node.dir/rclcpp_components/node_main_orbbec_camera_node.cpp.o
orbbec_camera_node: CMakeFiles/orbbec_camera_node.dir/build.make
orbbec_camera_node: /opt/ros/foxy/lib/libcomponent_manager.so
orbbec_camera_node: /opt/ros/foxy/lib/librclcpp.so
orbbec_camera_node: /opt/ros/foxy/lib/liblibstatistics_collector.so
orbbec_camera_node: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
orbbec_camera_node: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
orbbec_camera_node: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
orbbec_camera_node: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/librcl.so
orbbec_camera_node: /opt/ros/foxy/lib/librmw_implementation.so
orbbec_camera_node: /opt/ros/foxy/lib/librmw.so
orbbec_camera_node: /opt/ros/foxy/lib/librcl_logging_spdlog.so
orbbec_camera_node: /usr/lib/aarch64-linux-gnu/libspdlog.so.1.5.0
orbbec_camera_node: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
orbbec_camera_node: /opt/ros/foxy/lib/libyaml.so
orbbec_camera_node: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
orbbec_camera_node: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
orbbec_camera_node: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
orbbec_camera_node: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/libtracetools.so
orbbec_camera_node: /opt/ros/foxy/lib/libclass_loader.so
orbbec_camera_node: /opt/ros/foxy/lib/aarch64-linux-gnu/libconsole_bridge.so.1.0
orbbec_camera_node: /opt/ros/foxy/lib/libament_index_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_introspection_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_generator_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_introspection_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
orbbec_camera_node: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
orbbec_camera_node: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
orbbec_camera_node: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
orbbec_camera_node: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
orbbec_camera_node: /opt/ros/foxy/lib/librosidl_typesupport_c.so
orbbec_camera_node: /opt/ros/foxy/lib/librcpputils.so
orbbec_camera_node: /opt/ros/foxy/lib/librosidl_runtime_c.so
orbbec_camera_node: /opt/ros/foxy/lib/librcutils.so
orbbec_camera_node: CMakeFiles/orbbec_camera_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xtark/tarkbot/ros2_ws/build/orbbec_camera/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable orbbec_camera_node"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/orbbec_camera_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/orbbec_camera_node.dir/build: orbbec_camera_node

.PHONY : CMakeFiles/orbbec_camera_node.dir/build

CMakeFiles/orbbec_camera_node.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/orbbec_camera_node.dir/cmake_clean.cmake
.PHONY : CMakeFiles/orbbec_camera_node.dir/clean

CMakeFiles/orbbec_camera_node.dir/depend:
	cd /home/xtark/tarkbot/ros2_ws/build/orbbec_camera && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xtark/tarkbot/ros2_ws/src/OrbbecSDK_ROS2/orbbec_camera /home/xtark/tarkbot/ros2_ws/src/OrbbecSDK_ROS2/orbbec_camera /home/xtark/tarkbot/ros2_ws/build/orbbec_camera /home/xtark/tarkbot/ros2_ws/build/orbbec_camera /home/xtark/tarkbot/ros2_ws/build/orbbec_camera/CMakeFiles/orbbec_camera_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/orbbec_camera_node.dir/depend

