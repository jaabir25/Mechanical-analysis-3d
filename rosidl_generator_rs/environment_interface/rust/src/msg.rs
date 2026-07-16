#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to environment_interface__msg__Block

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Block {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: std::string::String,


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
    pub color: std_msgs::msg::ColorRGBA,

}



impl Default for Block {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Block::default())
  }
}

impl rosidl_runtime_rs::Message for Block {
  type RmwMsg = super::msg::rmw::Block;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
        x: msg.x,
        y: msg.y,
        z: msg.z,
        x_size: msg.x_size,
        y_size: msg.y_size,
        number: msg.number,
        is_support: msg.is_support,
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Owned(msg.color)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        frame_id: msg.frame_id.as_str().into(),
      x: msg.x,
      y: msg.y,
      z: msg.z,
      x_size: msg.x_size,
      y_size: msg.y_size,
      number: msg.number,
      is_support: msg.is_support,
        color: std_msgs::msg::ColorRGBA::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      frame_id: msg.frame_id.to_string(),
      x: msg.x,
      y: msg.y,
      z: msg.z,
      x_size: msg.x_size,
      y_size: msg.y_size,
      number: msg.number,
      is_support: msg.is_support,
      color: std_msgs::msg::ColorRGBA::from_rmw_message(msg.color),
    }
  }
}


