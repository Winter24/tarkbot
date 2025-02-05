// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from astra_camera_msgs:srv/GetCameraParams.idl
// generated code does not contain a copyright notice
#include "astra_camera_msgs/srv/detail/get_camera_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "astra_camera_msgs/srv/detail/get_camera_params__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace astra_camera_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_astra_camera_msgs
cdr_serialize(
  const astra_camera_msgs::srv::GetCameraParams_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_astra_camera_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  astra_camera_msgs::srv::GetCameraParams_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_astra_camera_msgs
get_serialized_size(
  const astra_camera_msgs::srv::GetCameraParams_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_astra_camera_msgs
max_serialized_size_GetCameraParams_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetCameraParams_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetCameraParams_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetCameraParams_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<astra_camera_msgs::srv::GetCameraParams_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetCameraParams_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetCameraParams_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetCameraParams_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetCameraParams_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetCameraParams_Request__callbacks = {
  "astra_camera_msgs::srv",
  "GetCameraParams_Request",
  _GetCameraParams_Request__cdr_serialize,
  _GetCameraParams_Request__cdr_deserialize,
  _GetCameraParams_Request__get_serialized_size,
  _GetCameraParams_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetCameraParams_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetCameraParams_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace astra_camera_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_astra_camera_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<astra_camera_msgs::srv::GetCameraParams_Request>()
{
  return &astra_camera_msgs::srv::typesupport_fastrtps_cpp::_GetCameraParams_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, astra_camera_msgs, srv, GetCameraParams_Request)() {
  return &astra_camera_msgs::srv::typesupport_fastrtps_cpp::_GetCameraParams_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace astra_camera_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_astra_camera_msgs
cdr_serialize(
  const astra_camera_msgs::srv::GetCameraParams_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: l_intr_p
  {
    cdr << ros_message.l_intr_p;
  }
  // Member: r_intr_p
  {
    cdr << ros_message.r_intr_p;
  }
  // Member: r2l_r
  {
    cdr << ros_message.r2l_r;
  }
  // Member: r2l_t
  {
    cdr << ros_message.r2l_t;
  }
  // Member: l_k
  {
    cdr << ros_message.l_k;
  }
  // Member: r_k
  {
    cdr << ros_message.r_k;
  }
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_astra_camera_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  astra_camera_msgs::srv::GetCameraParams_Response & ros_message)
{
  // Member: l_intr_p
  {
    cdr >> ros_message.l_intr_p;
  }

  // Member: r_intr_p
  {
    cdr >> ros_message.r_intr_p;
  }

  // Member: r2l_r
  {
    cdr >> ros_message.r2l_r;
  }

  // Member: r2l_t
  {
    cdr >> ros_message.r2l_t;
  }

  // Member: l_k
  {
    cdr >> ros_message.l_k;
  }

  // Member: r_k
  {
    cdr >> ros_message.r_k;
  }

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_astra_camera_msgs
get_serialized_size(
  const astra_camera_msgs::srv::GetCameraParams_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: l_intr_p
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.l_intr_p[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r_intr_p
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.r_intr_p[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r2l_r
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.r2l_r[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r2l_t
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.r2l_t[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l_k
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.l_k[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r_k
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.r_k[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_astra_camera_msgs
max_serialized_size_GetCameraParams_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: l_intr_p
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: r_intr_p
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: r2l_r
  {
    size_t array_size = 9;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: r2l_t
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: l_k
  {
    size_t array_size = 5;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: r_k
  {
    size_t array_size = 5;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetCameraParams_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetCameraParams_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetCameraParams_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<astra_camera_msgs::srv::GetCameraParams_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetCameraParams_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const astra_camera_msgs::srv::GetCameraParams_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetCameraParams_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetCameraParams_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetCameraParams_Response__callbacks = {
  "astra_camera_msgs::srv",
  "GetCameraParams_Response",
  _GetCameraParams_Response__cdr_serialize,
  _GetCameraParams_Response__cdr_deserialize,
  _GetCameraParams_Response__get_serialized_size,
  _GetCameraParams_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetCameraParams_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetCameraParams_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace astra_camera_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_astra_camera_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<astra_camera_msgs::srv::GetCameraParams_Response>()
{
  return &astra_camera_msgs::srv::typesupport_fastrtps_cpp::_GetCameraParams_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, astra_camera_msgs, srv, GetCameraParams_Response)() {
  return &astra_camera_msgs::srv::typesupport_fastrtps_cpp::_GetCameraParams_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace astra_camera_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetCameraParams__callbacks = {
  "astra_camera_msgs::srv",
  "GetCameraParams",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, astra_camera_msgs, srv, GetCameraParams_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, astra_camera_msgs, srv, GetCameraParams_Response)(),
};

static rosidl_service_type_support_t _GetCameraParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetCameraParams__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace astra_camera_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_astra_camera_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<astra_camera_msgs::srv::GetCameraParams>()
{
  return &astra_camera_msgs::srv::typesupport_fastrtps_cpp::_GetCameraParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, astra_camera_msgs, srv, GetCameraParams)() {
  return &astra_camera_msgs::srv::typesupport_fastrtps_cpp::_GetCameraParams__handle;
}

#ifdef __cplusplus
}
#endif
