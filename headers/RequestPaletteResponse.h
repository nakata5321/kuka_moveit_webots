// Generated by gencpp from file kuka_cv/RequestPaletteResponse.msg
// DO NOT EDIT!


#ifndef KUKA_CV_MESSAGE_REQUESTPALETTERESPONSE_H
#define KUKA_CV_MESSAGE_REQUESTPALETTERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kuka_cv/Color.h>
#include <kuka_cv/Pose.h>

namespace kuka_cv
{
template <class ContainerAllocator>
struct RequestPaletteResponse_
{
  typedef RequestPaletteResponse_<ContainerAllocator> Type;

  RequestPaletteResponse_()
    : colors()
    , poses()  {
    }
  RequestPaletteResponse_(const ContainerAllocator& _alloc)
    : colors(_alloc)
    , poses(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kuka_cv::Color_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kuka_cv::Color_<ContainerAllocator> >::other >  _colors_type;
  _colors_type colors;

   typedef std::vector< ::kuka_cv::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kuka_cv::Pose_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;





  typedef boost::shared_ptr< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RequestPaletteResponse_

typedef ::kuka_cv::RequestPaletteResponse_<std::allocator<void> > RequestPaletteResponse;

typedef boost::shared_ptr< ::kuka_cv::RequestPaletteResponse > RequestPaletteResponsePtr;
typedef boost::shared_ptr< ::kuka_cv::RequestPaletteResponse const> RequestPaletteResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kuka_cv::RequestPaletteResponse_<ContainerAllocator1> & lhs, const ::kuka_cv::RequestPaletteResponse_<ContainerAllocator2> & rhs)
{
  return lhs.colors == rhs.colors &&
    lhs.poses == rhs.poses;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kuka_cv::RequestPaletteResponse_<ContainerAllocator1> & lhs, const ::kuka_cv::RequestPaletteResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kuka_cv

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b1c8ea6fed5872a4cbc57e1d110a4859";
  }

  static const char* value(const ::kuka_cv::RequestPaletteResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb1c8ea6fed5872a4ULL;
  static const uint64_t static_value2 = 0xcbc57e1d110a4859ULL;
};

template<class ContainerAllocator>
struct DataType< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kuka_cv/RequestPaletteResponse";
  }

  static const char* value(const ::kuka_cv::RequestPaletteResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Color[] colors\n"
"Pose[] poses\n"
"\n"
"\n"
"================================================================================\n"
"MSG: kuka_cv/Color\n"
"uint8 r\n"
"uint8 g\n"
"uint8 b\n"
"\n"
"================================================================================\n"
"MSG: kuka_cv/Pose\n"
"# Position\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"# Orientation\n"
"float64 phi\n"
"float64 theta\n"
"float64 psi\n"
;
  }

  static const char* value(const ::kuka_cv::RequestPaletteResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.colors);
      stream.next(m.poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestPaletteResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kuka_cv::RequestPaletteResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kuka_cv::RequestPaletteResponse_<ContainerAllocator>& v)
  {
    s << indent << "colors[]" << std::endl;
    for (size_t i = 0; i < v.colors.size(); ++i)
    {
      s << indent << "  colors[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kuka_cv::Color_<ContainerAllocator> >::stream(s, indent + "    ", v.colors[i]);
    }
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kuka_cv::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KUKA_CV_MESSAGE_REQUESTPALETTERESPONSE_H