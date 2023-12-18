// Generated by gencpp from file sensor_math/CustomDepthMsg.msg
// DO NOT EDIT!


#ifndef SENSOR_MATH_MESSAGE_CUSTOMDEPTHMSG_H
#define SENSOR_MATH_MESSAGE_CUSTOMDEPTHMSG_H


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
struct CustomDepthMsg_
{
  typedef CustomDepthMsg_<ContainerAllocator> Type;

  CustomDepthMsg_()
    : header()
    , depth(0.0)  {
    }
  CustomDepthMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , depth(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _depth_type;
  _depth_type depth;





  typedef boost::shared_ptr< ::sensor_math::CustomDepthMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_math::CustomDepthMsg_<ContainerAllocator> const> ConstPtr;

}; // struct CustomDepthMsg_

typedef ::sensor_math::CustomDepthMsg_<std::allocator<void> > CustomDepthMsg;

typedef boost::shared_ptr< ::sensor_math::CustomDepthMsg > CustomDepthMsgPtr;
typedef boost::shared_ptr< ::sensor_math::CustomDepthMsg const> CustomDepthMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_math::CustomDepthMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_math::CustomDepthMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sensor_math::CustomDepthMsg_<ContainerAllocator1> & lhs, const ::sensor_math::CustomDepthMsg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.depth == rhs.depth;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sensor_math::CustomDepthMsg_<ContainerAllocator1> & lhs, const ::sensor_math::CustomDepthMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sensor_math

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sensor_math::CustomDepthMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_math::CustomDepthMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_math::CustomDepthMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_math::CustomDepthMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_math::CustomDepthMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_math::CustomDepthMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_math::CustomDepthMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ecaa3eb2663713277f30af306d8347d1";
  }

  static const char* value(const ::sensor_math::CustomDepthMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xecaa3eb266371327ULL;
  static const uint64_t static_value2 = 0x7f30af306d8347d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_math::CustomDepthMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_math/CustomDepthMsg";
  }

  static const char* value(const ::sensor_math::CustomDepthMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_math::CustomDepthMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#CustomDepthMsg.msg\n"
"Header header\n"
"\n"
"float32 depth\n"
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

  static const char* value(const ::sensor_math::CustomDepthMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_math::CustomDepthMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.depth);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CustomDepthMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_math::CustomDepthMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_math::CustomDepthMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "depth: ";
    Printer<float>::stream(s, indent + "  ", v.depth);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MATH_MESSAGE_CUSTOMDEPTHMSG_H
