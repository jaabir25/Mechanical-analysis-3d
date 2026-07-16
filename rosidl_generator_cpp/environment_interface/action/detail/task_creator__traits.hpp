// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_interface:action/TaskCreator.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__ACTION__DETAIL__TASK_CREATOR__TRAITS_HPP_
#define ENVIRONMENT_INTERFACE__ACTION__DETAIL__TASK_CREATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_interface/action/detail/task_creator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'block'
#include "environment_interface/msg/detail/block__traits.hpp"

namespace environment_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskCreator_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: block
  {
    out << "block: ";
    to_flow_style_yaml(msg.block, out);
    out << ", ";
  }

  // member: operation_id
  {
    out << "operation_id: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_id, out);
    out << ", ";
  }

  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: solver
  {
    out << "solver: ";
    rosidl_generator_traits::value_to_yaml(msg.solver, out);
    out << ", ";
  }

  // member: planner_id
  {
    out << "planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCreator_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: block
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block:\n";
    to_block_style_yaml(msg.block, out, indentation + 2);
  }

  // member: operation_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation_id: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_id, out);
    out << "\n";
  }

  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: solver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solver: ";
    rosidl_generator_traits::value_to_yaml(msg.solver, out);
    out << "\n";
  }

  // member: planner_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCreator_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::action::TaskCreator_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::action::TaskCreator_Goal & msg)
{
  return environment_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::action::TaskCreator_Goal>()
{
  return "environment_interface::action::TaskCreator_Goal";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_Goal>()
{
  return "environment_interface/action/TaskCreator_Goal";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_interface::action::TaskCreator_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace environment_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskCreator_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_resposnse
  {
    out << "task_resposnse: ";
    rosidl_generator_traits::value_to_yaml(msg.task_resposnse, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCreator_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_resposnse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_resposnse: ";
    rosidl_generator_traits::value_to_yaml(msg.task_resposnse, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCreator_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::action::TaskCreator_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::action::TaskCreator_Result & msg)
{
  return environment_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::action::TaskCreator_Result>()
{
  return "environment_interface::action::TaskCreator_Result";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_Result>()
{
  return "environment_interface/action/TaskCreator_Result";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_interface::action::TaskCreator_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace environment_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskCreator_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: partial_output
  {
    out << "partial_output: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCreator_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: partial_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partial_output: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCreator_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::action::TaskCreator_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::action::TaskCreator_Feedback & msg)
{
  return environment_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::action::TaskCreator_Feedback>()
{
  return "environment_interface::action::TaskCreator_Feedback";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_Feedback>()
{
  return "environment_interface/action/TaskCreator_Feedback";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_interface::action::TaskCreator_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "environment_interface/action/detail/task_creator__traits.hpp"

namespace environment_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskCreator_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCreator_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCreator_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::action::TaskCreator_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::action::TaskCreator_SendGoal_Request & msg)
{
  return environment_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::action::TaskCreator_SendGoal_Request>()
{
  return "environment_interface::action::TaskCreator_SendGoal_Request";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_SendGoal_Request>()
{
  return "environment_interface/action/TaskCreator_SendGoal_Request";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<environment_interface::action::TaskCreator_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<environment_interface::action::TaskCreator_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<environment_interface::action::TaskCreator_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace environment_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskCreator_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCreator_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCreator_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::action::TaskCreator_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::action::TaskCreator_SendGoal_Response & msg)
{
  return environment_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::action::TaskCreator_SendGoal_Response>()
{
  return "environment_interface::action::TaskCreator_SendGoal_Response";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_SendGoal_Response>()
{
  return "environment_interface/action/TaskCreator_SendGoal_Response";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<environment_interface::action::TaskCreator_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<environment_interface::action::TaskCreator_SendGoal>()
{
  return "environment_interface::action::TaskCreator_SendGoal";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_SendGoal>()
{
  return "environment_interface/action/TaskCreator_SendGoal";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<environment_interface::action::TaskCreator_SendGoal_Request>::value &&
    has_fixed_size<environment_interface::action::TaskCreator_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<environment_interface::action::TaskCreator_SendGoal_Request>::value &&
    has_bounded_size<environment_interface::action::TaskCreator_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<environment_interface::action::TaskCreator_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<environment_interface::action::TaskCreator_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<environment_interface::action::TaskCreator_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace environment_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskCreator_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCreator_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCreator_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::action::TaskCreator_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::action::TaskCreator_GetResult_Request & msg)
{
  return environment_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::action::TaskCreator_GetResult_Request>()
{
  return "environment_interface::action::TaskCreator_GetResult_Request";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_GetResult_Request>()
{
  return "environment_interface/action/TaskCreator_GetResult_Request";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<environment_interface::action::TaskCreator_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "environment_interface/action/detail/task_creator__traits.hpp"

namespace environment_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskCreator_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCreator_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCreator_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::action::TaskCreator_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::action::TaskCreator_GetResult_Response & msg)
{
  return environment_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::action::TaskCreator_GetResult_Response>()
{
  return "environment_interface::action::TaskCreator_GetResult_Response";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_GetResult_Response>()
{
  return "environment_interface/action/TaskCreator_GetResult_Response";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<environment_interface::action::TaskCreator_Result>::value> {};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<environment_interface::action::TaskCreator_Result>::value> {};

template<>
struct is_message<environment_interface::action::TaskCreator_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<environment_interface::action::TaskCreator_GetResult>()
{
  return "environment_interface::action::TaskCreator_GetResult";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_GetResult>()
{
  return "environment_interface/action/TaskCreator_GetResult";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<environment_interface::action::TaskCreator_GetResult_Request>::value &&
    has_fixed_size<environment_interface::action::TaskCreator_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<environment_interface::action::TaskCreator_GetResult_Request>::value &&
    has_bounded_size<environment_interface::action::TaskCreator_GetResult_Response>::value
  >
{
};

template<>
struct is_service<environment_interface::action::TaskCreator_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<environment_interface::action::TaskCreator_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<environment_interface::action::TaskCreator_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "environment_interface/action/detail/task_creator__traits.hpp"

namespace environment_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskCreator_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskCreator_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskCreator_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::action::TaskCreator_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::action::TaskCreator_FeedbackMessage & msg)
{
  return environment_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::action::TaskCreator_FeedbackMessage>()
{
  return "environment_interface::action::TaskCreator_FeedbackMessage";
}

template<>
inline const char * name<environment_interface::action::TaskCreator_FeedbackMessage>()
{
  return "environment_interface/action/TaskCreator_FeedbackMessage";
}

template<>
struct has_fixed_size<environment_interface::action::TaskCreator_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<environment_interface::action::TaskCreator_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<environment_interface::action::TaskCreator_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<environment_interface::action::TaskCreator_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<environment_interface::action::TaskCreator_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<environment_interface::action::TaskCreator>
  : std::true_type
{
};

template<>
struct is_action_goal<environment_interface::action::TaskCreator_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<environment_interface::action::TaskCreator_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<environment_interface::action::TaskCreator_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ENVIRONMENT_INTERFACE__ACTION__DETAIL__TASK_CREATOR__TRAITS_HPP_
