// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_interface:action/TaskCreator.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__ACTION__DETAIL__TASK_CREATOR__BUILDER_HPP_
#define ENVIRONMENT_INTERFACE__ACTION__DETAIL__TASK_CREATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_interface/action/detail/task_creator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_interface
{

namespace action
{

namespace builder
{

class Init_TaskCreator_Goal_planner_id
{
public:
  explicit Init_TaskCreator_Goal_planner_id(::environment_interface::action::TaskCreator_Goal & msg)
  : msg_(msg)
  {}
  ::environment_interface::action::TaskCreator_Goal planner_id(::environment_interface::action::TaskCreator_Goal::_planner_id_type arg)
  {
    msg_.planner_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_Goal msg_;
};

class Init_TaskCreator_Goal_solver
{
public:
  explicit Init_TaskCreator_Goal_solver(::environment_interface::action::TaskCreator_Goal & msg)
  : msg_(msg)
  {}
  Init_TaskCreator_Goal_planner_id solver(::environment_interface::action::TaskCreator_Goal::_solver_type arg)
  {
    msg_.solver = std::move(arg);
    return Init_TaskCreator_Goal_planner_id(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_Goal msg_;
};

class Init_TaskCreator_Goal_robot_name
{
public:
  explicit Init_TaskCreator_Goal_robot_name(::environment_interface::action::TaskCreator_Goal & msg)
  : msg_(msg)
  {}
  Init_TaskCreator_Goal_solver robot_name(::environment_interface::action::TaskCreator_Goal::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_TaskCreator_Goal_solver(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_Goal msg_;
};

class Init_TaskCreator_Goal_operation_id
{
public:
  explicit Init_TaskCreator_Goal_operation_id(::environment_interface::action::TaskCreator_Goal & msg)
  : msg_(msg)
  {}
  Init_TaskCreator_Goal_robot_name operation_id(::environment_interface::action::TaskCreator_Goal::_operation_id_type arg)
  {
    msg_.operation_id = std::move(arg);
    return Init_TaskCreator_Goal_robot_name(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_Goal msg_;
};

class Init_TaskCreator_Goal_block
{
public:
  Init_TaskCreator_Goal_block()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskCreator_Goal_operation_id block(::environment_interface::action::TaskCreator_Goal::_block_type arg)
  {
    msg_.block = std::move(arg);
    return Init_TaskCreator_Goal_operation_id(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::action::TaskCreator_Goal>()
{
  return environment_interface::action::builder::Init_TaskCreator_Goal_block();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace action
{

namespace builder
{

class Init_TaskCreator_Result_task_resposnse
{
public:
  Init_TaskCreator_Result_task_resposnse()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_interface::action::TaskCreator_Result task_resposnse(::environment_interface::action::TaskCreator_Result::_task_resposnse_type arg)
  {
    msg_.task_resposnse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::action::TaskCreator_Result>()
{
  return environment_interface::action::builder::Init_TaskCreator_Result_task_resposnse();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace action
{

namespace builder
{

class Init_TaskCreator_Feedback_partial_output
{
public:
  Init_TaskCreator_Feedback_partial_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_interface::action::TaskCreator_Feedback partial_output(::environment_interface::action::TaskCreator_Feedback::_partial_output_type arg)
  {
    msg_.partial_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::action::TaskCreator_Feedback>()
{
  return environment_interface::action::builder::Init_TaskCreator_Feedback_partial_output();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace action
{

namespace builder
{

class Init_TaskCreator_SendGoal_Request_goal
{
public:
  explicit Init_TaskCreator_SendGoal_Request_goal(::environment_interface::action::TaskCreator_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::environment_interface::action::TaskCreator_SendGoal_Request goal(::environment_interface::action::TaskCreator_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_SendGoal_Request msg_;
};

class Init_TaskCreator_SendGoal_Request_goal_id
{
public:
  Init_TaskCreator_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskCreator_SendGoal_Request_goal goal_id(::environment_interface::action::TaskCreator_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TaskCreator_SendGoal_Request_goal(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::action::TaskCreator_SendGoal_Request>()
{
  return environment_interface::action::builder::Init_TaskCreator_SendGoal_Request_goal_id();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace action
{

namespace builder
{

class Init_TaskCreator_SendGoal_Response_stamp
{
public:
  explicit Init_TaskCreator_SendGoal_Response_stamp(::environment_interface::action::TaskCreator_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::environment_interface::action::TaskCreator_SendGoal_Response stamp(::environment_interface::action::TaskCreator_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_SendGoal_Response msg_;
};

class Init_TaskCreator_SendGoal_Response_accepted
{
public:
  Init_TaskCreator_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskCreator_SendGoal_Response_stamp accepted(::environment_interface::action::TaskCreator_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TaskCreator_SendGoal_Response_stamp(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::action::TaskCreator_SendGoal_Response>()
{
  return environment_interface::action::builder::Init_TaskCreator_SendGoal_Response_accepted();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace action
{

namespace builder
{

class Init_TaskCreator_GetResult_Request_goal_id
{
public:
  Init_TaskCreator_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_interface::action::TaskCreator_GetResult_Request goal_id(::environment_interface::action::TaskCreator_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::action::TaskCreator_GetResult_Request>()
{
  return environment_interface::action::builder::Init_TaskCreator_GetResult_Request_goal_id();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace action
{

namespace builder
{

class Init_TaskCreator_GetResult_Response_result
{
public:
  explicit Init_TaskCreator_GetResult_Response_result(::environment_interface::action::TaskCreator_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::environment_interface::action::TaskCreator_GetResult_Response result(::environment_interface::action::TaskCreator_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_GetResult_Response msg_;
};

class Init_TaskCreator_GetResult_Response_status
{
public:
  Init_TaskCreator_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskCreator_GetResult_Response_result status(::environment_interface::action::TaskCreator_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TaskCreator_GetResult_Response_result(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::action::TaskCreator_GetResult_Response>()
{
  return environment_interface::action::builder::Init_TaskCreator_GetResult_Response_status();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace action
{

namespace builder
{

class Init_TaskCreator_FeedbackMessage_feedback
{
public:
  explicit Init_TaskCreator_FeedbackMessage_feedback(::environment_interface::action::TaskCreator_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::environment_interface::action::TaskCreator_FeedbackMessage feedback(::environment_interface::action::TaskCreator_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_FeedbackMessage msg_;
};

class Init_TaskCreator_FeedbackMessage_goal_id
{
public:
  Init_TaskCreator_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskCreator_FeedbackMessage_feedback goal_id(::environment_interface::action::TaskCreator_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TaskCreator_FeedbackMessage_feedback(msg_);
  }

private:
  ::environment_interface::action::TaskCreator_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::action::TaskCreator_FeedbackMessage>()
{
  return environment_interface::action::builder::Init_TaskCreator_FeedbackMessage_goal_id();
}

}  // namespace environment_interface

#endif  // ENVIRONMENT_INTERFACE__ACTION__DETAIL__TASK_CREATOR__BUILDER_HPP_
