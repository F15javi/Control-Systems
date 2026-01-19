// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "msgs_control/srv/detail/sim_pid__struct.h"
#include "msgs_control/srv/detail/sim_pid__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool msgs_control__srv__sim_pid__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("msgs_control.srv._sim_pid.SimPID_Request", full_classname_dest, 40) == 0);
  }
  msgs_control__srv__SimPID_Request * ros_message = _ros_message;
  {  // kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ki
    PyObject * field = PyObject_GetAttrString(_pymsg, "ki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ki = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "kd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msgs_control__srv__sim_pid__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SimPID_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msgs_control.srv._sim_pid");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SimPID_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msgs_control__srv__SimPID_Request * ros_message = (msgs_control__srv__SimPID_Request *)raw_ros_message;
  {  // kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__struct.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool msgs_control__srv__sim_pid__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("msgs_control.srv._sim_pid.SimPID_Response", full_classname_dest, 41) == 0);
  }
  msgs_control__srv__SimPID_Response * ros_message = _ros_message;
  {  // overshoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "overshoot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->overshoot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d
    PyObject * field = PyObject_GetAttrString(_pymsg, "d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ess
    PyObject * field = PyObject_GetAttrString(_pymsg, "ess");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ess = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ts
    PyObject * field = PyObject_GetAttrString(_pymsg, "ts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ts = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msgs_control__srv__sim_pid__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SimPID_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msgs_control.srv._sim_pid");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SimPID_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msgs_control__srv__SimPID_Response * ros_message = (msgs_control__srv__SimPID_Response *)raw_ros_message;
  {  // overshoot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->overshoot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overshoot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ess
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ess);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ess", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
