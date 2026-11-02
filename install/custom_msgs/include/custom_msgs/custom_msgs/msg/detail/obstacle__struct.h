// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPHERE'.
enum
{
  custom_msgs__msg__Obstacle__SPHERE = 0
};

/// Constant 'BOX'.
enum
{
  custom_msgs__msg__Obstacle__BOX = 1
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/Obstacle in the package custom_msgs.
typedef struct custom_msgs__msg__Obstacle
{
  rosidl_runtime_c__String name;
  uint8_t shape_type;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
  double radius;
  double box_size[3];
} custom_msgs__msg__Obstacle;

// Struct for a sequence of custom_msgs__msg__Obstacle.
typedef struct custom_msgs__msg__Obstacle__Sequence
{
  custom_msgs__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
