#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "environment_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__environment_interface__msg__Block() -> *const std::ffi::c_void;
}

#[link(name = "environment_interface__rosidl_generator_c")]
extern "C" {
    fn environment_interface__msg__Block__init(msg: *mut Block) -> bool;
    fn environment_interface__msg__Block__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Block>, size: usize) -> bool;
    fn environment_interface__msg__Block__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Block>);
    fn environment_interface__msg__Block__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Block>, out_seq: *mut rosidl_runtime_rs::Sequence<Block>) -> bool;
}

// Corresponds to environment_interface__msg__Block
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Block {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_size: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_size: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub number: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_support: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std_msgs::msg::rmw::ColorRGBA,

}



impl Default for Block {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !environment_interface__msg__Block__init(&mut msg as *mut _) {
        panic!("Call to environment_interface__msg__Block__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Block {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__msg__Block__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__msg__Block__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { environment_interface__msg__Block__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Block {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Block where Self: Sized {
  const TYPE_NAME: &'static str = "environment_interface/msg/Block";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__environment_interface__msg__Block() }
  }
}


