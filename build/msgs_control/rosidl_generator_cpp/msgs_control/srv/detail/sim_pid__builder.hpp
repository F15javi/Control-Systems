// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice

#ifndef MSGS_CONTROL__SRV__DETAIL__SIM_PID__BUILDER_HPP_
#define MSGS_CONTROL__SRV__DETAIL__SIM_PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msgs_control/srv/detail/sim_pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msgs_control
{

namespace srv
{

namespace builder
{

class Init_SimPID_Request_kd
{
public:
  explicit Init_SimPID_Request_kd(::msgs_control::srv::SimPID_Request & msg)
  : msg_(msg)
  {}
  ::msgs_control::srv::SimPID_Request kd(::msgs_control::srv::SimPID_Request::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs_control::srv::SimPID_Request msg_;
};

class Init_SimPID_Request_ki
{
public:
  explicit Init_SimPID_Request_ki(::msgs_control::srv::SimPID_Request & msg)
  : msg_(msg)
  {}
  Init_SimPID_Request_kd ki(::msgs_control::srv::SimPID_Request::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_SimPID_Request_kd(msg_);
  }

private:
  ::msgs_control::srv::SimPID_Request msg_;
};

class Init_SimPID_Request_kp
{
public:
  Init_SimPID_Request_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimPID_Request_ki kp(::msgs_control::srv::SimPID_Request::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_SimPID_Request_ki(msg_);
  }

private:
  ::msgs_control::srv::SimPID_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs_control::srv::SimPID_Request>()
{
  return msgs_control::srv::builder::Init_SimPID_Request_kp();
}

}  // namespace msgs_control


namespace msgs_control
{

namespace srv
{

namespace builder
{

class Init_SimPID_Response_ts
{
public:
  explicit Init_SimPID_Response_ts(::msgs_control::srv::SimPID_Response & msg)
  : msg_(msg)
  {}
  ::msgs_control::srv::SimPID_Response ts(::msgs_control::srv::SimPID_Response::_ts_type arg)
  {
    msg_.ts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs_control::srv::SimPID_Response msg_;
};

class Init_SimPID_Response_ess
{
public:
  explicit Init_SimPID_Response_ess(::msgs_control::srv::SimPID_Response & msg)
  : msg_(msg)
  {}
  Init_SimPID_Response_ts ess(::msgs_control::srv::SimPID_Response::_ess_type arg)
  {
    msg_.ess = std::move(arg);
    return Init_SimPID_Response_ts(msg_);
  }

private:
  ::msgs_control::srv::SimPID_Response msg_;
};

class Init_SimPID_Response_d
{
public:
  explicit Init_SimPID_Response_d(::msgs_control::srv::SimPID_Response & msg)
  : msg_(msg)
  {}
  Init_SimPID_Response_ess d(::msgs_control::srv::SimPID_Response::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_SimPID_Response_ess(msg_);
  }

private:
  ::msgs_control::srv::SimPID_Response msg_;
};

class Init_SimPID_Response_overshoot
{
public:
  Init_SimPID_Response_overshoot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimPID_Response_d overshoot(::msgs_control::srv::SimPID_Response::_overshoot_type arg)
  {
    msg_.overshoot = std::move(arg);
    return Init_SimPID_Response_d(msg_);
  }

private:
  ::msgs_control::srv::SimPID_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs_control::srv::SimPID_Response>()
{
  return msgs_control::srv::builder::Init_SimPID_Response_overshoot();
}

}  // namespace msgs_control

#endif  // MSGS_CONTROL__SRV__DETAIL__SIM_PID__BUILDER_HPP_
