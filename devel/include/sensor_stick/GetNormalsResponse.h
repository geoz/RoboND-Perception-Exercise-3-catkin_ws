// Generated by gencpp from file sensor_stick/GetNormalsResponse.msg
// DO NOT EDIT!


#ifndef SENSOR_STICK_MESSAGE_GETNORMALSRESPONSE_H
#define SENSOR_STICK_MESSAGE_GETNORMALSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/PointCloud2.h>

namespace sensor_stick
{
template <class ContainerAllocator>
struct GetNormalsResponse_
{
  typedef GetNormalsResponse_<ContainerAllocator> Type;

  GetNormalsResponse_()
    : cluster()  {
    }
  GetNormalsResponse_(const ContainerAllocator& _alloc)
    : cluster(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _cluster_type;
  _cluster_type cluster;




  typedef boost::shared_ptr< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetNormalsResponse_

typedef ::sensor_stick::GetNormalsResponse_<std::allocator<void> > GetNormalsResponse;

typedef boost::shared_ptr< ::sensor_stick::GetNormalsResponse > GetNormalsResponsePtr;
typedef boost::shared_ptr< ::sensor_stick::GetNormalsResponse const> GetNormalsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_stick::GetNormalsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_stick

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'sensor_stick': ['/home/robond/catkin_ws/src/sensor_stick/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "526994c9d06037106595eb6bae52d4e8";
  }

  static const char* value(const ::sensor_stick::GetNormalsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x526994c9d0603710ULL;
  static const uint64_t static_value2 = 0x6595eb6bae52d4e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_stick/GetNormalsResponse";
  }

  static const char* value(const ::sensor_stick::GetNormalsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/PointCloud2 cluster\n\
\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
";
  }

  static const char* value(const ::sensor_stick::GetNormalsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cluster);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetNormalsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_stick::GetNormalsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_stick::GetNormalsResponse_<ContainerAllocator>& v)
  {
    s << indent << "cluster: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.cluster);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_STICK_MESSAGE_GETNORMALSRESPONSE_H
