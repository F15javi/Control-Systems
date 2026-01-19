// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "msgs_control/srv/detail/sim_pid__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace msgs_control
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimPID_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimPID_Request_type_support_ids_t;

static const _SimPID_Request_type_support_ids_t _SimPID_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimPID_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimPID_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimPID_Request_type_support_symbol_names_t _SimPID_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msgs_control, srv, SimPID_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msgs_control, srv, SimPID_Request)),
  }
};

typedef struct _SimPID_Request_type_support_data_t
{
  void * data[2];
} _SimPID_Request_type_support_data_t;

static _SimPID_Request_type_support_data_t _SimPID_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimPID_Request_message_typesupport_map = {
  2,
  "msgs_control",
  &_SimPID_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SimPID_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SimPID_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimPID_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimPID_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace msgs_control

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msgs_control::srv::SimPID_Request>()
{
  return &::msgs_control::srv::rosidl_typesupport_cpp::SimPID_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, msgs_control, srv, SimPID_Request)() {
  return get_message_type_support_handle<msgs_control::srv::SimPID_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs_control
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimPID_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimPID_Response_type_support_ids_t;

static const _SimPID_Response_type_support_ids_t _SimPID_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimPID_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimPID_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimPID_Response_type_support_symbol_names_t _SimPID_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msgs_control, srv, SimPID_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msgs_control, srv, SimPID_Response)),
  }
};

typedef struct _SimPID_Response_type_support_data_t
{
  void * data[2];
} _SimPID_Response_type_support_data_t;

static _SimPID_Response_type_support_data_t _SimPID_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimPID_Response_message_typesupport_map = {
  2,
  "msgs_control",
  &_SimPID_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SimPID_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SimPID_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimPID_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimPID_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace msgs_control

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msgs_control::srv::SimPID_Response>()
{
  return &::msgs_control::srv::rosidl_typesupport_cpp::SimPID_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, msgs_control, srv, SimPID_Response)() {
  return get_message_type_support_handle<msgs_control::srv::SimPID_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msgs_control
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimPID_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimPID_type_support_ids_t;

static const _SimPID_type_support_ids_t _SimPID_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimPID_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimPID_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimPID_type_support_symbol_names_t _SimPID_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msgs_control, srv, SimPID)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msgs_control, srv, SimPID)),
  }
};

typedef struct _SimPID_type_support_data_t
{
  void * data[2];
} _SimPID_type_support_data_t;

static _SimPID_type_support_data_t _SimPID_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimPID_service_typesupport_map = {
  2,
  "msgs_control",
  &_SimPID_service_typesupport_ids.typesupport_identifier[0],
  &_SimPID_service_typesupport_symbol_names.symbol_name[0],
  &_SimPID_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SimPID_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimPID_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace msgs_control

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<msgs_control::srv::SimPID>()
{
  return &::msgs_control::srv::rosidl_typesupport_cpp::SimPID_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
