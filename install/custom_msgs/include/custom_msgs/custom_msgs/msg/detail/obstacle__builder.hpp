// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_box_size
{
public:
  explicit Init_Obstacle_box_size(::custom_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::Obstacle box_size(::custom_msgs::msg::Obstacle::_box_size_type arg)
  {
    msg_.box_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_radius
{
public:
  explicit Init_Obstacle_radius(::custom_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_box_size radius(::custom_msgs::msg::Obstacle::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_Obstacle_box_size(msg_);
  }

private:
  ::custom_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_orientation
{
public:
  explicit Init_Obstacle_orientation(::custom_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_radius orientation(::custom_msgs::msg::Obstacle::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Obstacle_radius(msg_);
  }

private:
  ::custom_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_position
{
public:
  explicit Init_Obstacle_position(::custom_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_orientation position(::custom_msgs::msg::Obstacle::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Obstacle_orientation(msg_);
  }

private:
  ::custom_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_shape_type
{
public:
  explicit Init_Obstacle_shape_type(::custom_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_position shape_type(::custom_msgs::msg::Obstacle::_shape_type_type arg)
  {
    msg_.shape_type = std::move(arg);
    return Init_Obstacle_position(msg_);
  }

private:
  ::custom_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_name
{
public:
  Init_Obstacle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_shape_type name(::custom_msgs::msg::Obstacle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Obstacle_shape_type(msg_);
  }

private:
  ::custom_msgs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Obstacle>()
{
  return custom_msgs::msg::builder::Init_Obstacle_name();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
