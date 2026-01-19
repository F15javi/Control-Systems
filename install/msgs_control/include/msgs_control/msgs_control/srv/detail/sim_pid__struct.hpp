// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice

#ifndef MSGS_CONTROL__SRV__DETAIL__SIM_PID__STRUCT_HPP_
#define MSGS_CONTROL__SRV__DETAIL__SIM_PID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msgs_control__srv__SimPID_Request __attribute__((deprecated))
#else
# define DEPRECATED__msgs_control__srv__SimPID_Request __declspec(deprecated)
#endif

namespace msgs_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimPID_Request_
{
  using Type = SimPID_Request_<ContainerAllocator>;

  explicit SimPID_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0f;
      this->ki = 0.0f;
      this->kd = 0.0f;
    }
  }

  explicit SimPID_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0f;
      this->ki = 0.0f;
      this->kd = 0.0f;
    }
  }

  // field types and members
  using _kp_type =
    float;
  _kp_type kp;
  using _ki_type =
    float;
  _ki_type ki;
  using _kd_type =
    float;
  _kd_type kd;

  // setters for named parameter idiom
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__ki(
    const float & _arg)
  {
    this->ki = _arg;
    return *this;
  }
  Type & set__kd(
    const float & _arg)
  {
    this->kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgs_control::srv::SimPID_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgs_control::srv::SimPID_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgs_control::srv::SimPID_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgs_control::srv::SimPID_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgs_control::srv::SimPID_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgs_control::srv::SimPID_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgs_control::srv::SimPID_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgs_control::srv::SimPID_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgs_control::srv::SimPID_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgs_control::srv::SimPID_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgs_control__srv__SimPID_Request
    std::shared_ptr<msgs_control::srv::SimPID_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgs_control__srv__SimPID_Request
    std::shared_ptr<msgs_control::srv::SimPID_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimPID_Request_ & other) const
  {
    if (this->kp != other.kp) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimPID_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimPID_Request_

// alias to use template instance with default allocator
using SimPID_Request =
  msgs_control::srv::SimPID_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msgs_control


#ifndef _WIN32
# define DEPRECATED__msgs_control__srv__SimPID_Response __attribute__((deprecated))
#else
# define DEPRECATED__msgs_control__srv__SimPID_Response __declspec(deprecated)
#endif

namespace msgs_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimPID_Response_
{
  using Type = SimPID_Response_<ContainerAllocator>;

  explicit SimPID_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->overshoot = 0.0f;
      this->d = 0.0f;
      this->ess = 0.0f;
      this->ts = 0.0f;
    }
  }

  explicit SimPID_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->overshoot = 0.0f;
      this->d = 0.0f;
      this->ess = 0.0f;
      this->ts = 0.0f;
    }
  }

  // field types and members
  using _overshoot_type =
    float;
  _overshoot_type overshoot;
  using _d_type =
    float;
  _d_type d;
  using _ess_type =
    float;
  _ess_type ess;
  using _ts_type =
    float;
  _ts_type ts;

  // setters for named parameter idiom
  Type & set__overshoot(
    const float & _arg)
  {
    this->overshoot = _arg;
    return *this;
  }
  Type & set__d(
    const float & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__ess(
    const float & _arg)
  {
    this->ess = _arg;
    return *this;
  }
  Type & set__ts(
    const float & _arg)
  {
    this->ts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgs_control::srv::SimPID_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgs_control::srv::SimPID_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgs_control::srv::SimPID_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgs_control::srv::SimPID_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgs_control::srv::SimPID_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgs_control::srv::SimPID_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgs_control::srv::SimPID_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgs_control::srv::SimPID_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgs_control::srv::SimPID_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgs_control::srv::SimPID_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgs_control__srv__SimPID_Response
    std::shared_ptr<msgs_control::srv::SimPID_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgs_control__srv__SimPID_Response
    std::shared_ptr<msgs_control::srv::SimPID_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimPID_Response_ & other) const
  {
    if (this->overshoot != other.overshoot) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->ess != other.ess) {
      return false;
    }
    if (this->ts != other.ts) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimPID_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimPID_Response_

// alias to use template instance with default allocator
using SimPID_Response =
  msgs_control::srv::SimPID_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msgs_control

namespace msgs_control
{

namespace srv
{

struct SimPID
{
  using Request = msgs_control::srv::SimPID_Request;
  using Response = msgs_control::srv::SimPID_Response;
};

}  // namespace srv

}  // namespace msgs_control

#endif  // MSGS_CONTROL__SRV__DETAIL__SIM_PID__STRUCT_HPP_
