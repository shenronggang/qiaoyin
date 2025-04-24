// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from driver:msg/GripperInfo.idl
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
#include "driver/msg/detail/gripper_info__struct.h"
#include "driver/msg/detail/gripper_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool driver__msg__gripper_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("driver.msg._gripper_info.GripperInfo", full_classname_dest, 36) == 0);
  }
  driver__msg__GripperInfo * ros_message = _ros_message;
  {  // left_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_gripper");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_gripper = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_gripper");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_gripper = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * driver__msg__gripper_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GripperInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("driver.msg._gripper_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GripperInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  driver__msg__GripperInfo * ros_message = (driver__msg__GripperInfo *)raw_ros_message;
  {  // left_gripper
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_gripper ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_gripper
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_gripper ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
