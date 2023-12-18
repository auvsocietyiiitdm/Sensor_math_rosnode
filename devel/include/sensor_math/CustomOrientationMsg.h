// Generated by gencpp from file sensor_math/CustomOrientationMsg.msg
// DO NOT EDIT!


#ifndef SENSOR_MATH_MESSAGE_CUSTOMORIENTATIONMSG_H
#define SENSOR_MATH_MESSAGE_CUSTOMORIENTATIONMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sensor_math
{
template <class ContainerAllocator>
struct CustomOrientationMsg_
{
  typedef CustomOrientationMsg_<ContainerAllocator> Type;

  CustomOrientationMsg_()
    : header()
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
    }
  CustomOrientationMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _yaw_type;
  _yaw_type yaw;





  typedef boost::shared_ptr< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> const> ConstPtr;

}; // struct CustomOrientationMsg_

typedef ::sensor_math::CustomOrientationMsg_<std::allocator<void> > CustomOrientationMsg;

typedef boost::shared_ptr< ::sensor_math::CustomOrientationMsg > CustomOrientationMsgPtr;
typedef boost::shared_ptr< ::sensor_math::CustomOrientationMsg const> CustomOrientationMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_math::CustomOrientationMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sensor_math::CustomOrientationMsg_<ContainerAllocator1> & lhs, const ::sensor_math::CustomOrientationMsg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.yaw == rhs.yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sensor_math::CustomOrientationMsg_<ContainerAllocator1> & lhs, const ::sensor_math::CustomOrientationMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sensor_math

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e16d253ac46e3d525d41cd25c5023ecc";
  }

  static const char* value(const ::sensor_math::CustomOrientationMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe16d253ac46e3d52ULL;
  static const uint64_t static_value2 = 0x5d41cd25c5023eccULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_math/CustomOrientationMsg";
  }

  static const char* value(const ::sensor_math::CustomOrientationMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#CustomOrientationMsg.msg\n"
"Header header\n"
"\n"
"float32 roll\n"
"float32 pitch\n"
"float32 yaw\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::sensor_math::CustomOrientationMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CustomOrientationMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_math::CustomOrientationMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_math::CustomOrientationMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MATH_MESSAGE_CUSTOMORIENTATIONMSG_H
