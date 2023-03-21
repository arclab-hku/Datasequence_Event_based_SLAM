// Generated by gencpp from file prophesee_event_msgs/EventArray.msg
// DO NOT EDIT!


#ifndef PROPHESEE_EVENT_MSGS_MESSAGE_EVENTARRAY_H
#define PROPHESEE_EVENT_MSGS_MESSAGE_EVENTARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include "Event.h"

namespace prophesee_event_msgs
{
template <class ContainerAllocator>
struct EventArray_
{
  typedef EventArray_<ContainerAllocator> Type;

  EventArray_()
    : header()
    , height(0)
    , width(0)
    , events()  {
    }
  EventArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , height(0)
    , width(0)
    , events(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _height_type;
  _height_type height;

   typedef uint32_t _width_type;
  _width_type width;

   typedef std::vector< ::prophesee_event_msgs::Event_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::prophesee_event_msgs::Event_<ContainerAllocator> >::other >  _events_type;
  _events_type events;





  typedef boost::shared_ptr< ::prophesee_event_msgs::EventArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prophesee_event_msgs::EventArray_<ContainerAllocator> const> ConstPtr;

}; // struct EventArray_

typedef ::prophesee_event_msgs::EventArray_<std::allocator<void> > EventArray;

typedef boost::shared_ptr< ::prophesee_event_msgs::EventArray > EventArrayPtr;
typedef boost::shared_ptr< ::prophesee_event_msgs::EventArray const> EventArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prophesee_event_msgs::EventArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prophesee_event_msgs::EventArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::prophesee_event_msgs::EventArray_<ContainerAllocator1> & lhs, const ::prophesee_event_msgs::EventArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.height == rhs.height &&
    lhs.width == rhs.width &&
    lhs.events == rhs.events;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::prophesee_event_msgs::EventArray_<ContainerAllocator1> & lhs, const ::prophesee_event_msgs::EventArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace prophesee_event_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::prophesee_event_msgs::EventArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prophesee_event_msgs::EventArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prophesee_event_msgs::EventArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prophesee_event_msgs::EventArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prophesee_event_msgs::EventArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prophesee_event_msgs::EventArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prophesee_event_msgs::EventArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e8beee5a6c107e504c2e78903c224b8";
  }

  static const char* value(const ::prophesee_event_msgs::EventArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e8beee5a6c107e5ULL;
  static const uint64_t static_value2 = 0x04c2e78903c224b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::prophesee_event_msgs::EventArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prophesee_event_msgs/EventArray";
  }

  static const char* value(const ::prophesee_event_msgs::EventArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prophesee_event_msgs::EventArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains an array of events\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# an array of events\n"
"Event[] events\n"
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
"\n"
"================================================================================\n"
"MSG: prophesee_event_msgs/Event\n"
"# A DVS event\n"
"uint16 x\n"
"uint16 y\n"
"time ts\n"
"bool polarity\n"
;
  }

  static const char* value(const ::prophesee_event_msgs::EventArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prophesee_event_msgs::EventArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.height);
      stream.next(m.width);
      stream.next(m.events);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EventArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prophesee_event_msgs::EventArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::prophesee_event_msgs::EventArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.height);
    s << indent << "width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.width);
    s << indent << "events[]" << std::endl;
    for (size_t i = 0; i < v.events.size(); ++i)
    {
      s << indent << "  events[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::prophesee_event_msgs::Event_<ContainerAllocator> >::stream(s, indent + "    ", v.events[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROPHESEE_EVENT_MSGS_MESSAGE_EVENTARRAY_H
