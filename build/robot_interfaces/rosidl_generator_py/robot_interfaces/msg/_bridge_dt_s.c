// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_interfaces:msg/BridgeDt.idl
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
#include "robot_interfaces/msg/detail/bridge_dt__struct.h"
#include "robot_interfaces/msg/detail/bridge_dt__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robot_interfaces__msg__bridge_dt__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("robot_interfaces.msg._bridge_dt.BridgeDt", full_classname_dest, 40) == 0);
  }
  robot_interfaces__msg__BridgeDt * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dt_can_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_can_tx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_can_tx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_can_tx_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_can_tx_joint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_can_tx_joint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_can_tx_wheel
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_can_tx_wheel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_can_tx_wheel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_can_tx_turret
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_can_tx_turret");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_can_tx_turret = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_can_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_can_rx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_can_rx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_mean_can_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_mean_can_tx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_mean_can_tx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_mean_can_tx_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_mean_can_tx_joint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_mean_can_tx_joint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_mean_can_tx_wheel
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_mean_can_tx_wheel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_mean_can_tx_wheel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_mean_can_tx_turret
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_mean_can_tx_turret");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_mean_can_tx_turret = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_mean_can_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_mean_can_rx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_mean_can_rx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_interfaces__msg__bridge_dt__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BridgeDt */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_interfaces.msg._bridge_dt");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BridgeDt");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_interfaces__msg__BridgeDt * ros_message = (robot_interfaces__msg__BridgeDt *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_can_tx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_can_tx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_can_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_can_tx_joint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_can_tx_joint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_can_tx_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_can_tx_wheel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_can_tx_wheel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_can_tx_wheel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_can_tx_turret
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_can_tx_turret);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_can_tx_turret", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_can_rx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_can_rx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_can_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_mean_can_tx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_mean_can_tx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_mean_can_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_mean_can_tx_joint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_mean_can_tx_joint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_mean_can_tx_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_mean_can_tx_wheel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_mean_can_tx_wheel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_mean_can_tx_wheel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_mean_can_tx_turret
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_mean_can_tx_turret);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_mean_can_tx_turret", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_mean_can_rx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_mean_can_rx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_mean_can_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
