// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/ObstacleArray.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/obstacle_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `obstacles`
#include "custom_msgs/msg/detail/obstacle__functions.h"

bool
custom_msgs__msg__ObstacleArray__init(custom_msgs__msg__ObstacleArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    custom_msgs__msg__ObstacleArray__fini(msg);
    return false;
  }
  // obstacles
  if (!custom_msgs__msg__Obstacle__Sequence__init(&msg->obstacles, 0)) {
    custom_msgs__msg__ObstacleArray__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__ObstacleArray__fini(custom_msgs__msg__ObstacleArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // obstacles
  custom_msgs__msg__Obstacle__Sequence__fini(&msg->obstacles);
}

bool
custom_msgs__msg__ObstacleArray__are_equal(const custom_msgs__msg__ObstacleArray * lhs, const custom_msgs__msg__ObstacleArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // obstacles
  if (!custom_msgs__msg__Obstacle__Sequence__are_equal(
      &(lhs->obstacles), &(rhs->obstacles)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__ObstacleArray__copy(
  const custom_msgs__msg__ObstacleArray * input,
  custom_msgs__msg__ObstacleArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // obstacles
  if (!custom_msgs__msg__Obstacle__Sequence__copy(
      &(input->obstacles), &(output->obstacles)))
  {
    return false;
  }
  return true;
}

custom_msgs__msg__ObstacleArray *
custom_msgs__msg__ObstacleArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ObstacleArray * msg = (custom_msgs__msg__ObstacleArray *)allocator.allocate(sizeof(custom_msgs__msg__ObstacleArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__ObstacleArray));
  bool success = custom_msgs__msg__ObstacleArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__ObstacleArray__destroy(custom_msgs__msg__ObstacleArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__ObstacleArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__ObstacleArray__Sequence__init(custom_msgs__msg__ObstacleArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ObstacleArray * data = NULL;

  if (size) {
    data = (custom_msgs__msg__ObstacleArray *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__ObstacleArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__ObstacleArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__ObstacleArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msgs__msg__ObstacleArray__Sequence__fini(custom_msgs__msg__ObstacleArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__ObstacleArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msgs__msg__ObstacleArray__Sequence *
custom_msgs__msg__ObstacleArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ObstacleArray__Sequence * array = (custom_msgs__msg__ObstacleArray__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__ObstacleArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__ObstacleArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__ObstacleArray__Sequence__destroy(custom_msgs__msg__ObstacleArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__ObstacleArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__ObstacleArray__Sequence__are_equal(const custom_msgs__msg__ObstacleArray__Sequence * lhs, const custom_msgs__msg__ObstacleArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__ObstacleArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__ObstacleArray__Sequence__copy(
  const custom_msgs__msg__ObstacleArray__Sequence * input,
  custom_msgs__msg__ObstacleArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__ObstacleArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__ObstacleArray * data =
      (custom_msgs__msg__ObstacleArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__ObstacleArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__ObstacleArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__ObstacleArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
