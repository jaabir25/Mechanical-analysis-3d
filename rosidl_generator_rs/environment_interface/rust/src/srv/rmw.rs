#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockCreate_Request() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__srv__BlockCreate_Request__init(msg: *mut BlockCreate_Request) -> bool;
    fn environment_interface__srv__BlockCreate_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockCreate_Request>, size: usize) -> bool;
    fn environment_interface__srv__BlockCreate_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockCreate_Request>);
    fn environment_interface__srv__BlockCreate_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockCreate_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockCreate_Request>) -> bool;
}

// Corresponds to environment_interface__srv__BlockCreate_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockCreate_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub block: super::super::msg::rmw::Block,

}



impl Default for BlockCreate_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__srv__BlockCreate_Request__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__srv__BlockCreate_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockCreate_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockCreate_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockCreate_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockCreate_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockCreate_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockCreate_Request where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/srv/BlockCreate_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockCreate_Request() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockCreate_Response() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__srv__BlockCreate_Response__init(msg: *mut BlockCreate_Response) -> bool;
    fn environment_interface__srv__BlockCreate_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockCreate_Response>, size: usize) -> bool;
    fn environment_interface__srv__BlockCreate_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockCreate_Response>);
    fn environment_interface__srv__BlockCreate_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockCreate_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockCreate_Response>) -> bool;
}

// Corresponds to environment_interface__srv__BlockCreate_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockCreate_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub output: i64,

}



impl Default for BlockCreate_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__srv__BlockCreate_Response__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__srv__BlockCreate_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockCreate_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockCreate_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockCreate_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockCreate_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockCreate_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockCreate_Response where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/srv/BlockCreate_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockCreate_Response() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockRemove_Request() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__srv__BlockRemove_Request__init(msg: *mut BlockRemove_Request) -> bool;
    fn environment_interface__srv__BlockRemove_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockRemove_Request>, size: usize) -> bool;
    fn environment_interface__srv__BlockRemove_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockRemove_Request>);
    fn environment_interface__srv__BlockRemove_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockRemove_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockRemove_Request>) -> bool;
}

// Corresponds to environment_interface__srv__BlockRemove_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockRemove_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub block: super::super::msg::rmw::Block,

}



impl Default for BlockRemove_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__srv__BlockRemove_Request__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__srv__BlockRemove_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockRemove_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemove_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemove_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemove_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockRemove_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockRemove_Request where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/srv/BlockRemove_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockRemove_Request() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockRemove_Response() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__srv__BlockRemove_Response__init(msg: *mut BlockRemove_Response) -> bool;
    fn environment_interface__srv__BlockRemove_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockRemove_Response>, size: usize) -> bool;
    fn environment_interface__srv__BlockRemove_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockRemove_Response>);
    fn environment_interface__srv__BlockRemove_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockRemove_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockRemove_Response>) -> bool;
}

// Corresponds to environment_interface__srv__BlockRemove_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockRemove_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub output: i64,

}



impl Default for BlockRemove_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__srv__BlockRemove_Response__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__srv__BlockRemove_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockRemove_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemove_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemove_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemove_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockRemove_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockRemove_Response where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/srv/BlockRemove_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockRemove_Response() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockRemoveAll_Request() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__srv__BlockRemoveAll_Request__init(msg: *mut BlockRemoveAll_Request) -> bool;
    fn environment_interface__srv__BlockRemoveAll_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockRemoveAll_Request>, size: usize) -> bool;
    fn environment_interface__srv__BlockRemoveAll_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockRemoveAll_Request>);
    fn environment_interface__srv__BlockRemoveAll_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockRemoveAll_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockRemoveAll_Request>) -> bool;
}

// Corresponds to environment_interface__srv__BlockRemoveAll_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockRemoveAll_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub blocks: rosidl_runtime_rs::Sequence<moveit_msgs::msg::rmw::CollisionObject>,

}



impl Default for BlockRemoveAll_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__srv__BlockRemoveAll_Request__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__srv__BlockRemoveAll_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockRemoveAll_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemoveAll_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemoveAll_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemoveAll_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockRemoveAll_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockRemoveAll_Request where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/srv/BlockRemoveAll_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockRemoveAll_Request() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockRemoveAll_Response() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__srv__BlockRemoveAll_Response__init(msg: *mut BlockRemoveAll_Response) -> bool;
    fn environment_interface__srv__BlockRemoveAll_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockRemoveAll_Response>, size: usize) -> bool;
    fn environment_interface__srv__BlockRemoveAll_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockRemoveAll_Response>);
    fn environment_interface__srv__BlockRemoveAll_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockRemoveAll_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockRemoveAll_Response>) -> bool;
}

// Corresponds to environment_interface__srv__BlockRemoveAll_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockRemoveAll_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub output: i64,

}



impl Default for BlockRemoveAll_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__srv__BlockRemoveAll_Response__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__srv__BlockRemoveAll_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockRemoveAll_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemoveAll_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemoveAll_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__BlockRemoveAll_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockRemoveAll_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockRemoveAll_Response where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/srv/BlockRemoveAll_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__BlockRemoveAll_Response() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__GetBlockColor_Request() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__srv__GetBlockColor_Request__init(msg: *mut GetBlockColor_Request) -> bool;
    fn environment_interface__srv__GetBlockColor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBlockColor_Request>, size: usize) -> bool;
    fn environment_interface__srv__GetBlockColor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBlockColor_Request>);
    fn environment_interface__srv__GetBlockColor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBlockColor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBlockColor_Request>) -> bool;
}

// Corresponds to environment_interface__srv__GetBlockColor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBlockColor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub index: i64,

}



impl Default for GetBlockColor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__srv__GetBlockColor_Request__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__srv__GetBlockColor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBlockColor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__GetBlockColor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__GetBlockColor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__GetBlockColor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBlockColor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBlockColor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/srv/GetBlockColor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__GetBlockColor_Request() }
  }
}


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__GetBlockColor_Response() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__srv__GetBlockColor_Response__init(msg: *mut GetBlockColor_Response) -> bool;
    fn environment_interface__srv__GetBlockColor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBlockColor_Response>, size: usize) -> bool;
    fn environment_interface__srv__GetBlockColor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBlockColor_Response>);
    fn environment_interface__srv__GetBlockColor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBlockColor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBlockColor_Response>) -> bool;
}

// Corresponds to environment_interface__srv__GetBlockColor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBlockColor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std_msgs::msg::rmw::ColorRGBA,

}



impl Default for GetBlockColor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__srv__GetBlockColor_Response__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__srv__GetBlockColor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBlockColor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__GetBlockColor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__GetBlockColor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__srv__GetBlockColor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBlockColor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBlockColor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/srv/GetBlockColor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__srv__GetBlockColor_Response() }
  }
}






#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__environment_interface__srv__BlockCreate() -> *const std::ffi::c_void;
}

// Corresponds to environment_interface__srv__BlockCreate
#[allow(missing_docs, non_camel_case_types)]
pub struct BlockCreate;

impl rosidl_runtime_rs::Service for BlockCreate {
    type Request = BlockCreate_Request;
    type Response = BlockCreate_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__environment_interface__srv__BlockCreate() }
    }
}




#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__environment_interface__srv__BlockRemove() -> *const std::ffi::c_void;
}

// Corresponds to environment_interface__srv__BlockRemove
#[allow(missing_docs, non_camel_case_types)]
pub struct BlockRemove;

impl rosidl_runtime_rs::Service for BlockRemove {
    type Request = BlockRemove_Request;
    type Response = BlockRemove_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__environment_interface__srv__BlockRemove() }
    }
}




#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__environment_interface__srv__BlockRemoveAll() -> *const std::ffi::c_void;
}

// Corresponds to environment_interface__srv__BlockRemoveAll
#[allow(missing_docs, non_camel_case_types)]
pub struct BlockRemoveAll;

impl rosidl_runtime_rs::Service for BlockRemoveAll {
    type Request = BlockRemoveAll_Request;
    type Response = BlockRemoveAll_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__environment_interface__srv__BlockRemoveAll() }
    }
}




#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__environment_interface__srv__GetBlockColor() -> *const std::ffi::c_void;
}

// Corresponds to environment_interface__srv__GetBlockColor
#[allow(missing_docs, non_camel_case_types)]
pub struct GetBlockColor;

impl rosidl_runtime_rs::Service for GetBlockColor {
    type Request = GetBlockColor_Request;
    type Response = GetBlockColor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__environment_interface__srv__GetBlockColor() }
    }
}


