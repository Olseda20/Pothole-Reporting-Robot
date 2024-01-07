// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:msg/PotholeData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/msg/detail/pothole_data__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/msg/detail/pothole_data__functions.h"
#include "custom_interfaces/msg/detail/pothole_data__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pothole_pose`
#include "geometry_msgs/msg/pose.h"
// Member `pothole_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__msg__PotholeData__init(message_memory);
}

void custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_fini_function(void * message_memory)
{
  custom_interfaces__msg__PotholeData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__PotholeData, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pothole_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__PotholeData, pothole_pose),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__PotholeData, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_message_members = {
  "custom_interfaces__msg",  // message namespace
  "PotholeData",  // message name
  3,  // number of fields
  sizeof(custom_interfaces__msg__PotholeData),
  custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_message_member_array,  // message members
  custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_message_type_support_handle = {
  0,
  &custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, PotholeData)() {
  custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__msg__PotholeData__rosidl_typesupport_introspection_c__PotholeData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
