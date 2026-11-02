// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/obstacle__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/obstacle__functions.h"
#include "custom_msgs/msg/detail/obstacle__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__Obstacle__init(message_memory);
}

void custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_fini_function(void * message_memory)
{
  custom_msgs__msg__Obstacle__fini(message_memory);
}

size_t custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__box_size(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__box_size(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__box_size(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__box_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__box_size(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__box_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__box_size(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[6] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Obstacle, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Obstacle, shape_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Obstacle, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Obstacle, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Obstacle, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "box_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Obstacle, box_size),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__box_size,  // size() function pointer
    custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__box_size,  // get_const(index) function pointer
    custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__box_size,  // get(index) function pointer
    custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__box_size,  // fetch(index, &value) function pointer
    custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__box_size,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_members = {
  "custom_msgs__msg",  // message namespace
  "Obstacle",  // message name
  6,  // number of fields
  sizeof(custom_msgs__msg__Obstacle),
  custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array,  // message members
  custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle = {
  0,
  &custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Obstacle)() {
  custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle.typesupport_identifier) {
    custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
