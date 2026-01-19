// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice
#include "msgs_control/srv/detail/sim_pid__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "msgs_control/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msgs_control/srv/detail/sim_pid__struct.h"
#include "msgs_control/srv/detail/sim_pid__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SimPID_Request__ros_msg_type = msgs_control__srv__SimPID_Request;

static bool _SimPID_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SimPID_Request__ros_msg_type * ros_message = static_cast<const _SimPID_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: kp
  {
    cdr << ros_message->kp;
  }

  // Field name: ki
  {
    cdr << ros_message->ki;
  }

  // Field name: kd
  {
    cdr << ros_message->kd;
  }

  return true;
}

static bool _SimPID_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SimPID_Request__ros_msg_type * ros_message = static_cast<_SimPID_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: kp
  {
    cdr >> ros_message->kp;
  }

  // Field name: ki
  {
    cdr >> ros_message->ki;
  }

  // Field name: kd
  {
    cdr >> ros_message->kd;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msgs_control
size_t get_serialized_size_msgs_control__srv__SimPID_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SimPID_Request__ros_msg_type * ros_message = static_cast<const _SimPID_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name kp
  {
    size_t item_size = sizeof(ros_message->kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ki
  {
    size_t item_size = sizeof(ros_message->ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kd
  {
    size_t item_size = sizeof(ros_message->kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SimPID_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_msgs_control__srv__SimPID_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msgs_control
size_t max_serialized_size_msgs_control__srv__SimPID_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: kp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ki
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SimPID_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_msgs_control__srv__SimPID_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SimPID_Request = {
  "msgs_control::srv",
  "SimPID_Request",
  _SimPID_Request__cdr_serialize,
  _SimPID_Request__cdr_deserialize,
  _SimPID_Request__get_serialized_size,
  _SimPID_Request__max_serialized_size
};

static rosidl_message_type_support_t _SimPID_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SimPID_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_control, srv, SimPID_Request)() {
  return &_SimPID_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "msgs_control/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__struct.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SimPID_Response__ros_msg_type = msgs_control__srv__SimPID_Response;

static bool _SimPID_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SimPID_Response__ros_msg_type * ros_message = static_cast<const _SimPID_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: overshoot
  {
    cdr << ros_message->overshoot;
  }

  // Field name: d
  {
    cdr << ros_message->d;
  }

  // Field name: ess
  {
    cdr << ros_message->ess;
  }

  // Field name: ts
  {
    cdr << ros_message->ts;
  }

  return true;
}

static bool _SimPID_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SimPID_Response__ros_msg_type * ros_message = static_cast<_SimPID_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: overshoot
  {
    cdr >> ros_message->overshoot;
  }

  // Field name: d
  {
    cdr >> ros_message->d;
  }

  // Field name: ess
  {
    cdr >> ros_message->ess;
  }

  // Field name: ts
  {
    cdr >> ros_message->ts;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msgs_control
size_t get_serialized_size_msgs_control__srv__SimPID_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SimPID_Response__ros_msg_type * ros_message = static_cast<const _SimPID_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name overshoot
  {
    size_t item_size = sizeof(ros_message->overshoot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d
  {
    size_t item_size = sizeof(ros_message->d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ess
  {
    size_t item_size = sizeof(ros_message->ess);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ts
  {
    size_t item_size = sizeof(ros_message->ts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SimPID_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_msgs_control__srv__SimPID_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msgs_control
size_t max_serialized_size_msgs_control__srv__SimPID_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: overshoot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ess
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SimPID_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_msgs_control__srv__SimPID_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SimPID_Response = {
  "msgs_control::srv",
  "SimPID_Response",
  _SimPID_Response__cdr_serialize,
  _SimPID_Response__cdr_deserialize,
  _SimPID_Response__get_serialized_size,
  _SimPID_Response__max_serialized_size
};

static rosidl_message_type_support_t _SimPID_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SimPID_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_control, srv, SimPID_Response)() {
  return &_SimPID_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "msgs_control/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msgs_control/srv/sim_pid.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SimPID__callbacks = {
  "msgs_control::srv",
  "SimPID",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_control, srv, SimPID_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_control, srv, SimPID_Response)(),
};

static rosidl_service_type_support_t SimPID__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SimPID__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_control, srv, SimPID)() {
  return &SimPID__handle;
}

#if defined(__cplusplus)
}
#endif
