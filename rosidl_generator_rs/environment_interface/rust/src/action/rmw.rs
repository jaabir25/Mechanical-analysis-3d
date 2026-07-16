
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_Goal() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__action__TaskCreator_Goal__init(msg: *mut TaskCreator_Goal) -> bool;
    fn environment_interface__action__TaskCreator_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_Goal>, size: usize) -> bool;
    fn environment_interface__action__TaskCreator_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_Goal>);
    fn environment_interface__action__TaskCreator_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskCreator_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_Goal>) -> bool;
}

// Corresponds to environment_interface__action__TaskCreator_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskCreator_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub block: super::super::msg::rmw::Block,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub solver: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planner_id: rosidl_runtime_rs::String,

}



impl Default for TaskCreator_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__action__TaskCreator_Goal__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__action__TaskCreator_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskCreator_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskCreator_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskCreator_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/action/TaskCreator_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_Goal() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_Result() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__action__TaskCreator_Result__init(msg: *mut TaskCreator_Result) -> bool;
    fn environment_interface__action__TaskCreator_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_Result>, size: usize) -> bool;
    fn environment_interface__action__TaskCreator_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_Result>);
    fn environment_interface__action__TaskCreator_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskCreator_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_Result>) -> bool;
}

// Corresponds to environment_interface__action__TaskCreator_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskCreator_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_resposnse: rosidl_runtime_rs::String,

}



impl Default for TaskCreator_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__action__TaskCreator_Result__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__action__TaskCreator_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskCreator_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskCreator_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskCreator_Result where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/action/TaskCreator_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_Result() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__action__TaskCreator_Feedback__init(msg: *mut TaskCreator_Feedback) -> bool;
    fn environment_interface__action__TaskCreator_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_Feedback>, size: usize) -> bool;
    fn environment_interface__action__TaskCreator_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_Feedback>);
    fn environment_interface__action__TaskCreator_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskCreator_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_Feedback>) -> bool;
}

// Corresponds to environment_interface__action__TaskCreator_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskCreator_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub partial_output: rosidl_runtime_rs::String,

}



impl Default for TaskCreator_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__action__TaskCreator_Feedback__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__action__TaskCreator_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskCreator_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskCreator_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskCreator_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/action/TaskCreator_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_Feedback() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__action__TaskCreator_FeedbackMessage__init(msg: *mut TaskCreator_FeedbackMessage) -> bool;
    fn environment_interface__action__TaskCreator_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_FeedbackMessage>, size: usize) -> bool;
    fn environment_interface__action__TaskCreator_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_FeedbackMessage>);
    fn environment_interface__action__TaskCreator_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskCreator_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_FeedbackMessage>) -> bool;
}

// Corresponds to environment_interface__action__TaskCreator_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskCreator_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::TaskCreator_Feedback,

}



impl Default for TaskCreator_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__action__TaskCreator_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__action__TaskCreator_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskCreator_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskCreator_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskCreator_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/action/TaskCreator_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_FeedbackMessage() }
  }
}




#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__action__TaskCreator_SendGoal_Request__init(msg: *mut TaskCreator_SendGoal_Request) -> bool;
    fn environment_interface__action__TaskCreator_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_SendGoal_Request>, size: usize) -> bool;
    fn environment_interface__action__TaskCreator_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_SendGoal_Request>);
    fn environment_interface__action__TaskCreator_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskCreator_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_SendGoal_Request>) -> bool;
}

// Corresponds to environment_interface__action__TaskCreator_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskCreator_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::TaskCreator_Goal,

}



impl Default for TaskCreator_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__action__TaskCreator_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__action__TaskCreator_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskCreator_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskCreator_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskCreator_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/action/TaskCreator_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_SendGoal_Request() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__action__TaskCreator_SendGoal_Response__init(msg: *mut TaskCreator_SendGoal_Response) -> bool;
    fn environment_interface__action__TaskCreator_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_SendGoal_Response>, size: usize) -> bool;
    fn environment_interface__action__TaskCreator_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_SendGoal_Response>);
    fn environment_interface__action__TaskCreator_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskCreator_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_SendGoal_Response>) -> bool;
}

// Corresponds to environment_interface__action__TaskCreator_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskCreator_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for TaskCreator_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__action__TaskCreator_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__action__TaskCreator_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskCreator_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskCreator_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskCreator_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/action/TaskCreator_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_SendGoal_Response() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__action__TaskCreator_GetResult_Request__init(msg: *mut TaskCreator_GetResult_Request) -> bool;
    fn environment_interface__action__TaskCreator_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_GetResult_Request>, size: usize) -> bool;
    fn environment_interface__action__TaskCreator_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_GetResult_Request>);
    fn environment_interface__action__TaskCreator_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskCreator_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_GetResult_Request>) -> bool;
}

// Corresponds to environment_interface__action__TaskCreator_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskCreator_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for TaskCreator_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__action__TaskCreator_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__action__TaskCreator_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskCreator_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskCreator_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskCreator_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/action/TaskCreator_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_GetResult_Request() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__action__TaskCreator_GetResult_Response__init(msg: *mut TaskCreator_GetResult_Response) -> bool;
    fn environment_interface__action__TaskCreator_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_GetResult_Response>, size: usize) -> bool;
    fn environment_interface__action__TaskCreator_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_GetResult_Response>);
    fn environment_interface__action__TaskCreator_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskCreator_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskCreator_GetResult_Response>) -> bool;
}

// Corresponds to environment_interface__action__TaskCreator_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskCreator_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::TaskCreator_Result,

}



impl Default for TaskCreator_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__action__TaskCreator_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__action__TaskCreator_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskCreator_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__action__TaskCreator_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskCreator_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskCreator_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/action/TaskCreator_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__action__TaskCreator_GetResult_Response() }
  }
}






#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__environment_interface__action__TaskCreator_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to environment_interface__action__TaskCreator_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct TaskCreator_SendGoal;

impl rosidl_runtime_rs::Service for TaskCreator_SendGoal {
    type Request = TaskCreator_SendGoal_Request;
    type Response = TaskCreator_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__environment_interface__action__TaskCreator_SendGoal() }
    }
}




#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__environment_interface__action__TaskCreator_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to environment_interface__action__TaskCreator_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct TaskCreator_GetResult;

impl rosidl_runtime_rs::Service for TaskCreator_GetResult {
    type Request = TaskCreator_GetResult_Request;
    type Response = TaskCreator_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__environment_interface__action__TaskCreator_GetResult() }
    }
}


