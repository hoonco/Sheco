// Generated by gencpp from file test/MsgTutorial.msg
// DO NOT EDIT!


#ifndef TEST_MESSAGE_MSGTUTORIAL_H
#define TEST_MESSAGE_MSGTUTORIAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test
{
template <class ContainerAllocator>
struct MsgTutorial_
{
  typedef MsgTutorial_<ContainerAllocator> Type;

  MsgTutorial_()
    : stamp()
    , data(0)  {
    }
  MsgTutorial_(const ContainerAllocator& _alloc)
    : stamp()
    , data(0)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef int32_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::test::MsgTutorial_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test::MsgTutorial_<ContainerAllocator> const> ConstPtr;

}; // struct MsgTutorial_

typedef ::test::MsgTutorial_<std::allocator<void> > MsgTutorial;

typedef boost::shared_ptr< ::test::MsgTutorial > MsgTutorialPtr;
typedef boost::shared_ptr< ::test::MsgTutorial const> MsgTutorialConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test::MsgTutorial_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test::MsgTutorial_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'test': ['/home/helios789/catkin_ws/src/test/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test::MsgTutorial_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test::MsgTutorial_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::MsgTutorial_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test::MsgTutorial_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::MsgTutorial_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test::MsgTutorial_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test::MsgTutorial_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc5a8a0aefee54a11d41536be86744a6";
  }

  static const char* value(const ::test::MsgTutorial_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc5a8a0aefee54a1ULL;
  static const uint64_t static_value2 = 0x1d41536be86744a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::test::MsgTutorial_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test/MsgTutorial";
  }

  static const char* value(const ::test::MsgTutorial_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test::MsgTutorial_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n\
int32 data\n\
";
  }

  static const char* value(const ::test::MsgTutorial_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test::MsgTutorial_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MsgTutorial_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test::MsgTutorial_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test::MsgTutorial_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "data: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_MESSAGE_MSGTUTORIAL_H
