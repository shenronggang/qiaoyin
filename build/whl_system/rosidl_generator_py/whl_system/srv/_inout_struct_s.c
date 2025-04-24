// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from whl_system:srv/InoutStruct.idl
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
#include "whl_system/srv/detail/inout_struct__struct.h"
#include "whl_system/srv/detail/inout_struct__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool whl_system__msg__arm_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * whl_system__msg__arm_info__convert_to_py(void * raw_ros_message);
bool whl_system__msg__agv_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * whl_system__msg__agv_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool whl_system__srv__inout_struct__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("whl_system.srv._inout_struct.InoutStruct_Request", full_classname_dest, 48) == 0);
  }
  whl_system__srv__InoutStruct_Request * ros_message = _ros_message;
  {  // robot_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->robot_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // running_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "running_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->running_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ctrl_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctrl_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ctrl_cmd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arm_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_info");
    if (!field) {
      return false;
    }
    if (!whl_system__msg__arm_info__convert_from_py(field, &ros_message->arm_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // agv_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "agv_info");
    if (!field) {
      return false;
    }
    if (!whl_system__msg__agv_info__convert_from_py(field, &ros_message->agv_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * whl_system__srv__inout_struct__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InoutStruct_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("whl_system.srv._inout_struct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InoutStruct_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  whl_system__srv__InoutStruct_Request * ros_message = (whl_system__srv__InoutStruct_Request *)raw_ros_message;
  {  // robot_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->robot_name.data,
      strlen(ros_message->robot_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // running_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->running_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "running_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ctrl_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ctrl_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctrl_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_info
    PyObject * field = NULL;
    field = whl_system__msg__arm_info__convert_to_py(&ros_message->arm_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agv_info
    PyObject * field = NULL;
    field = whl_system__msg__agv_info__convert_to_py(&ros_message->agv_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "agv_info", field);
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
// #include "whl_system/srv/detail/inout_struct__struct.h"
// already included above
// #include "whl_system/srv/detail/inout_struct__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool whl_system__msg__arm_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * whl_system__msg__arm_info__convert_to_py(void * raw_ros_message);
bool whl_system__msg__arm_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * whl_system__msg__arm_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool whl_system__srv__inout_struct__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("whl_system.srv._inout_struct.InoutStruct_Response", full_classname_dest, 49) == 0);
  }
  whl_system__srv__InoutStruct_Response * ros_message = _ros_message;
  {  // motor_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_on");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_on = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // running_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "running_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->running_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ctrl_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctrl_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ctrl_cmd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gripper'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 2;
      bool * dest = ros_message->gripper;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // q_agv_peed
    PyObject * field = PyObject_GetAttrString(_pymsg, "q_agv_peed");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 2;
      double * dest = ros_message->q_agv_peed;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // exp_agv_peed
    PyObject * field = PyObject_GetAttrString(_pymsg, "exp_agv_peed");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 2;
      double * dest = ros_message->exp_agv_peed;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // robot_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_pos");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 3;
      double * dest = ros_message->robot_pos;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // q_arm_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "q_arm_info");
    if (!field) {
      return false;
    }
    if (!whl_system__msg__arm_info__convert_from_py(field, &ros_message->q_arm_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // exp_arm_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "exp_arm_info");
    if (!field) {
      return false;
    }
    if (!whl_system__msg__arm_info__convert_from_py(field, &ros_message->exp_arm_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // step
    PyObject * field = PyObject_GetAttrString(_pymsg, "step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->step = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * whl_system__srv__inout_struct__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InoutStruct_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("whl_system.srv._inout_struct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InoutStruct_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  whl_system__srv__InoutStruct_Response * ros_message = (whl_system__srv__InoutStruct_Response *)raw_ros_message;
  {  // motor_on
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // running_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->running_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "running_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ctrl_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ctrl_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctrl_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper
    PyObject * field = NULL;
    size_t size = 2;
    bool * src = ros_message->gripper;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q_agv_peed
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "q_agv_peed");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->q_agv_peed[0]);
    memcpy(dst, src, 2 * sizeof(double));
    Py_DECREF(field);
  }
  {  // exp_agv_peed
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "exp_agv_peed");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->exp_agv_peed[0]);
    memcpy(dst, src, 2 * sizeof(double));
    Py_DECREF(field);
  }
  {  // robot_pos
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "robot_pos");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->robot_pos[0]);
    memcpy(dst, src, 3 * sizeof(double));
    Py_DECREF(field);
  }
  {  // q_arm_info
    PyObject * field = NULL;
    field = whl_system__msg__arm_info__convert_to_py(&ros_message->q_arm_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "q_arm_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exp_arm_info
    PyObject * field = NULL;
    field = whl_system__msg__arm_info__convert_to_py(&ros_message->exp_arm_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "exp_arm_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
