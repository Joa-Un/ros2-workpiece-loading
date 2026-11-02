#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to custom_msgs__msg__Obstacle

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Obstacle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shape_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation: geometry_msgs::msg::Quaternion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub radius: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub box_size: [f64; 3],

}

impl Obstacle {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPHERE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BOX: u8 = 1;

}


impl Default for Obstacle {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Obstacle::default())
  }
}

impl rosidl_runtime_rs::Message for Obstacle {
  type RmwMsg = super::msg::rmw::Obstacle;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        shape_type: msg.shape_type,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.orientation)).into_owned(),
        radius: msg.radius,
        box_size: msg.box_size,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      shape_type: msg.shape_type,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orientation)).into_owned(),
      radius: msg.radius,
        box_size: msg.box_size,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      shape_type: msg.shape_type,
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      orientation: geometry_msgs::msg::Quaternion::from_rmw_message(msg.orientation),
      radius: msg.radius,
      box_size: msg.box_size,
    }
  }
}


// Corresponds to custom_msgs__msg__ObstacleArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObstacleArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub obstacles: Vec<super::msg::Obstacle>,

}



impl Default for ObstacleArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObstacleArray::default())
  }
}

impl rosidl_runtime_rs::Message for ObstacleArray {
  type RmwMsg = super::msg::rmw::ObstacleArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        obstacles: msg.obstacles
          .into_iter()
          .map(|elem| super::msg::Obstacle::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        obstacles: msg.obstacles
          .iter()
          .map(|elem| super::msg::Obstacle::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      obstacles: msg.obstacles
          .into_iter()
          .map(super::msg::Obstacle::from_rmw_message)
          .collect(),
    }
  }
}


