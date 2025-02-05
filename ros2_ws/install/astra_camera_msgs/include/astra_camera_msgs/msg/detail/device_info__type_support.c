// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from astra_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "astra_camera_msgs/msg/detail/device_info__rosidl_typesupport_introspection_c.h"
#include "astra_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "astra_camera_msgs/msg/detail/device_info__functions.h"
#include "astra_camera_msgs/msg/detail/device_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `serial_number`
// Member `firmware_version`
// Member `supported_min_sdk_version`
// Member `hardware_version`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  astra_camera_msgs__msg__DeviceInfo__init(message_memory);
}

void DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_fini_function(void * message_memory)
{
  astra_camera_msgs__msg__DeviceInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__msg__DeviceInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__msg__DeviceInfo, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__msg__DeviceInfo, vid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__msg__DeviceInfo, pid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__msg__DeviceInfo, serial_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "firmware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__msg__DeviceInfo, firmware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "supported_min_sdk_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__msg__DeviceInfo, supported_min_sdk_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hardware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(astra_camera_msgs__msg__DeviceInfo, hardware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_message_members = {
  "astra_camera_msgs__msg",  // message namespace
  "DeviceInfo",  // message name
  8,  // number of fields
  sizeof(astra_camera_msgs__msg__DeviceInfo),
  DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_message_member_array,  // message members
  DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_message_type_support_handle = {
  0,
  &DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_astra_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, astra_camera_msgs, msg, DeviceInfo)() {
  DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_message_type_support_handle.typesupport_identifier) {
    DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DeviceInfo__rosidl_typesupport_introspection_c__DeviceInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
