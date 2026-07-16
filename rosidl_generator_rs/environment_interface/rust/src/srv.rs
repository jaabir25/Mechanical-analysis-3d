#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to environment_interface__srv__BlockCreate_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockCreate_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub block: super::msg::Block,

}



impl Default for BlockCreate_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::BlockCreate_Request::default())
  }
}

impl rosidl_runtime_rs::Message for BlockCreate_Request {
  type RmwMsg = super::srv::rmw::BlockCreate_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        block: super::msg::Block::into_rmw_message(std::borrow::Cow::Owned(msg.block)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        block: super::msg::Block::into_rmw_message(std::borrow::Cow::Borrowed(&msg.block)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      block: super::msg::Block::from_rmw_message(msg.block),
    }
  }
}


// Corresponds to environment_interface__srv__BlockCreate_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockCreate_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub output: i64,

}



impl Default for BlockCreate_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::BlockCreate_Response::default())
  }
}

impl rosidl_runtime_rs::Message for BlockCreate_Response {
  type RmwMsg = super::srv::rmw::BlockCreate_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        output: msg.output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      output: msg.output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      output: msg.output,
    }
  }
}


// Corresponds to environment_interface__srv__BlockRemove_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockRemove_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub block: super::msg::Block,

}



impl Default for BlockRemove_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::BlockRemove_Request::default())
  }
}

impl rosidl_runtime_rs::Message for BlockRemove_Request {
  type RmwMsg = super::srv::rmw::BlockRemove_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        block: super::msg::Block::into_rmw_message(std::borrow::Cow::Owned(msg.block)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        block: super::msg::Block::into_rmw_message(std::borrow::Cow::Borrowed(&msg.block)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      block: super::msg::Block::from_rmw_message(msg.block),
    }
  }
}


// Corresponds to environment_interface__srv__BlockRemove_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockRemove_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub output: i64,

}



impl Default for BlockRemove_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::BlockRemove_Response::default())
  }
}

impl rosidl_runtime_rs::Message for BlockRemove_Response {
  type RmwMsg = super::srv::rmw::BlockRemove_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        output: msg.output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      output: msg.output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      output: msg.output,
    }
  }
}


// Corresponds to environment_interface__srv__BlockRemoveAll_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockRemoveAll_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub blocks: Vec<moveit_msgs::msg::CollisionObject>,

}



impl Default for BlockRemoveAll_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::BlockRemoveAll_Request::default())
  }
}

impl rosidl_runtime_rs::Message for BlockRemoveAll_Request {
  type RmwMsg = super::srv::rmw::BlockRemoveAll_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        blocks: msg.blocks
          .into_iter()
          .map(|elem| moveit_msgs::msg::CollisionObject::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        blocks: msg.blocks
          .iter()
          .map(|elem| moveit_msgs::msg::CollisionObject::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      blocks: msg.blocks
          .into_iter()
          .map(moveit_msgs::msg::CollisionObject::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to environment_interface__srv__BlockRemoveAll_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockRemoveAll_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub output: i64,

}



impl Default for BlockRemoveAll_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::BlockRemoveAll_Response::default())
  }
}

impl rosidl_runtime_rs::Message for BlockRemoveAll_Response {
  type RmwMsg = super::srv::rmw::BlockRemoveAll_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        output: msg.output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      output: msg.output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      output: msg.output,
    }
  }
}


// Corresponds to environment_interface__srv__GetBlockColor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBlockColor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub index: i64,

}



impl Default for GetBlockColor_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBlockColor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetBlockColor_Request {
  type RmwMsg = super::srv::rmw::GetBlockColor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        index: msg.index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      index: msg.index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      index: msg.index,
    }
  }
}


// Corresponds to environment_interface__srv__GetBlockColor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBlockColor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std_msgs::msg::ColorRGBA,

}



impl Default for GetBlockColor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBlockColor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetBlockColor_Response {
  type RmwMsg = super::srv::rmw::GetBlockColor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.color)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.color),
    }
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


