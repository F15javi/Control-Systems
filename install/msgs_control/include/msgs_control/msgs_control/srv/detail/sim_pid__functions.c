// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice
#include "msgs_control/srv/detail/sim_pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
msgs_control__srv__SimPID_Request__init(msgs_control__srv__SimPID_Request * msg)
{
  if (!msg) {
    return false;
  }
  // kp
  // ki
  // kd
  return true;
}

void
msgs_control__srv__SimPID_Request__fini(msgs_control__srv__SimPID_Request * msg)
{
  if (!msg) {
    return;
  }
  // kp
  // ki
  // kd
}

bool
msgs_control__srv__SimPID_Request__are_equal(const msgs_control__srv__SimPID_Request * lhs, const msgs_control__srv__SimPID_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // ki
  if (lhs->ki != rhs->ki) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  return true;
}

bool
msgs_control__srv__SimPID_Request__copy(
  const msgs_control__srv__SimPID_Request * input,
  msgs_control__srv__SimPID_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // kp
  output->kp = input->kp;
  // ki
  output->ki = input->ki;
  // kd
  output->kd = input->kd;
  return true;
}

msgs_control__srv__SimPID_Request *
msgs_control__srv__SimPID_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_control__srv__SimPID_Request * msg = (msgs_control__srv__SimPID_Request *)allocator.allocate(sizeof(msgs_control__srv__SimPID_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs_control__srv__SimPID_Request));
  bool success = msgs_control__srv__SimPID_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs_control__srv__SimPID_Request__destroy(msgs_control__srv__SimPID_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs_control__srv__SimPID_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs_control__srv__SimPID_Request__Sequence__init(msgs_control__srv__SimPID_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_control__srv__SimPID_Request * data = NULL;

  if (size) {
    data = (msgs_control__srv__SimPID_Request *)allocator.zero_allocate(size, sizeof(msgs_control__srv__SimPID_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs_control__srv__SimPID_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs_control__srv__SimPID_Request__fini(&data[i - 1]);
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
msgs_control__srv__SimPID_Request__Sequence__fini(msgs_control__srv__SimPID_Request__Sequence * array)
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
      msgs_control__srv__SimPID_Request__fini(&array->data[i]);
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

msgs_control__srv__SimPID_Request__Sequence *
msgs_control__srv__SimPID_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_control__srv__SimPID_Request__Sequence * array = (msgs_control__srv__SimPID_Request__Sequence *)allocator.allocate(sizeof(msgs_control__srv__SimPID_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs_control__srv__SimPID_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs_control__srv__SimPID_Request__Sequence__destroy(msgs_control__srv__SimPID_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs_control__srv__SimPID_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs_control__srv__SimPID_Request__Sequence__are_equal(const msgs_control__srv__SimPID_Request__Sequence * lhs, const msgs_control__srv__SimPID_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs_control__srv__SimPID_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs_control__srv__SimPID_Request__Sequence__copy(
  const msgs_control__srv__SimPID_Request__Sequence * input,
  msgs_control__srv__SimPID_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs_control__srv__SimPID_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msgs_control__srv__SimPID_Request * data =
      (msgs_control__srv__SimPID_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs_control__srv__SimPID_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msgs_control__srv__SimPID_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs_control__srv__SimPID_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
msgs_control__srv__SimPID_Response__init(msgs_control__srv__SimPID_Response * msg)
{
  if (!msg) {
    return false;
  }
  // overshoot
  // d
  // ess
  // ts
  return true;
}

void
msgs_control__srv__SimPID_Response__fini(msgs_control__srv__SimPID_Response * msg)
{
  if (!msg) {
    return;
  }
  // overshoot
  // d
  // ess
  // ts
}

bool
msgs_control__srv__SimPID_Response__are_equal(const msgs_control__srv__SimPID_Response * lhs, const msgs_control__srv__SimPID_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // overshoot
  if (lhs->overshoot != rhs->overshoot) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  // ess
  if (lhs->ess != rhs->ess) {
    return false;
  }
  // ts
  if (lhs->ts != rhs->ts) {
    return false;
  }
  return true;
}

bool
msgs_control__srv__SimPID_Response__copy(
  const msgs_control__srv__SimPID_Response * input,
  msgs_control__srv__SimPID_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // overshoot
  output->overshoot = input->overshoot;
  // d
  output->d = input->d;
  // ess
  output->ess = input->ess;
  // ts
  output->ts = input->ts;
  return true;
}

msgs_control__srv__SimPID_Response *
msgs_control__srv__SimPID_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_control__srv__SimPID_Response * msg = (msgs_control__srv__SimPID_Response *)allocator.allocate(sizeof(msgs_control__srv__SimPID_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs_control__srv__SimPID_Response));
  bool success = msgs_control__srv__SimPID_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs_control__srv__SimPID_Response__destroy(msgs_control__srv__SimPID_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs_control__srv__SimPID_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs_control__srv__SimPID_Response__Sequence__init(msgs_control__srv__SimPID_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_control__srv__SimPID_Response * data = NULL;

  if (size) {
    data = (msgs_control__srv__SimPID_Response *)allocator.zero_allocate(size, sizeof(msgs_control__srv__SimPID_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs_control__srv__SimPID_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs_control__srv__SimPID_Response__fini(&data[i - 1]);
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
msgs_control__srv__SimPID_Response__Sequence__fini(msgs_control__srv__SimPID_Response__Sequence * array)
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
      msgs_control__srv__SimPID_Response__fini(&array->data[i]);
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

msgs_control__srv__SimPID_Response__Sequence *
msgs_control__srv__SimPID_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_control__srv__SimPID_Response__Sequence * array = (msgs_control__srv__SimPID_Response__Sequence *)allocator.allocate(sizeof(msgs_control__srv__SimPID_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs_control__srv__SimPID_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs_control__srv__SimPID_Response__Sequence__destroy(msgs_control__srv__SimPID_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs_control__srv__SimPID_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs_control__srv__SimPID_Response__Sequence__are_equal(const msgs_control__srv__SimPID_Response__Sequence * lhs, const msgs_control__srv__SimPID_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs_control__srv__SimPID_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs_control__srv__SimPID_Response__Sequence__copy(
  const msgs_control__srv__SimPID_Response__Sequence * input,
  msgs_control__srv__SimPID_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs_control__srv__SimPID_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msgs_control__srv__SimPID_Response * data =
      (msgs_control__srv__SimPID_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs_control__srv__SimPID_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msgs_control__srv__SimPID_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs_control__srv__SimPID_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
