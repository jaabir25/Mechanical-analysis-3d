// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_interface:srv/BlockRemoveAll.idl
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
#include "environment_interface/srv/detail/block_remove_all__struct.h"
#include "environment_interface/srv/detail/block_remove_all__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "moveit_msgs/msg/detail/collision_object__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool moveit_msgs__msg__collision_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_msgs__msg__collision_object__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool environment_interface__srv__block_remove_all__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("environment_interface.srv._block_remove_all.BlockRemoveAll_Request", full_classname_dest, 66) == 0);
  }
  environment_interface__srv__BlockRemoveAll_Request * ros_message = _ros_message;
  {  // blocks
    PyObject * field = PyObject_GetAttrString(_pymsg, "blocks");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'blocks'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!moveit_msgs__msg__CollisionObject__Sequence__init(&(ros_message->blocks), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__CollisionObject__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__CollisionObject * dest = ros_message->blocks.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__collision_object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * environment_interface__srv__block_remove_all__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BlockRemoveAll_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_interface.srv._block_remove_all");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BlockRemoveAll_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_interface__srv__BlockRemoveAll_Request * ros_message = (environment_interface__srv__BlockRemoveAll_Request *)raw_ros_message;
  {  // blocks
    PyObject * field = NULL;
    size_t size = ros_message->blocks.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__CollisionObject * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->blocks.data[i]);
      PyObject * pyitem = moveit_msgs__msg__collision_object__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "blocks", field);
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
// #include "environment_interface/srv/detail/block_remove_all__struct.h"
// already included above
// #include "environment_interface/srv/detail/block_remove_all__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool environment_interface__srv__block_remove_all__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("environment_interface.srv._block_remove_all.BlockRemoveAll_Response", full_classname_dest, 67) == 0);
  }
  environment_interface__srv__BlockRemoveAll_Response * ros_message = _ros_message;
  {  // output
    PyObject * field = PyObject_GetAttrString(_pymsg, "output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->output = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * environment_interface__srv__block_remove_all__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BlockRemoveAll_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_interface.srv._block_remove_all");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BlockRemoveAll_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_interface__srv__BlockRemoveAll_Response * ros_message = (environment_interface__srv__BlockRemoveAll_Response *)raw_ros_message;
  {  // output
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
