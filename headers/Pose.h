// Generated by gencpp from file kuka_cv/Pose.msg
// DO NOT EDIT!


#ifndef KUKA_CV_MESSAGE_POSE_H
#define KUKA_CV_MESSAGE_POSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kuka_cv
{
template <class ContainerAllocator>
struct Pose_
{
  typedef Pose_<ContainerAllocator> Type;

  Pose_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , phi(0.0)
    , theta(0.0)
    , psi(0.0)  {
    }
  Pose_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , phi(0.0)
    , theta(0.0)
    , psi(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _phi_type;
  _phi_type phi;

   typedef double _theta_type;
  _theta_type theta;

   typedef double _psi_type;
  _psi_type psi;





  typedef boost::shared_ptr< ::kuka_cv::Pose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kuka_cv::Pose_<ContainerAllocator> const> ConstPtr;

}; // struct Pose_

typedef ::kuka_cv::Pose_<std::allocator<void> > Pose;

typedef boost::shared_ptr< ::kuka_cv::Pose > PosePtr;
typedef boost::shared_ptr< ::kuka_cv::Pose const> PoseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kuka_cv::Pose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kuka_cv::Pose_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kuka_cv::Pose_<ContainerAllocator1> & lhs, const ::kuka_cv::Pose_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.phi == rhs.phi &&
    lhs.theta == rhs.theta &&
    lhs.psi == rhs.psi;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kuka_cv::Pose_<ContainerAllocator1> & lhs, const ::kuka_cv::Pose_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kuka_cv

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kuka_cv::Pose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kuka_cv::Pose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kuka_cv::Pose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kuka_cv::Pose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kuka_cv::Pose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kuka_cv::Pose_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kuka_cv::Pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "28833ad46fe44d5123a6573471f79229";
  }

  static const char* value(const ::kuka_cv::Pose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x28833ad46fe44d51ULL;
  static const uint64_t static_value2 = 0x23a6573471f79229ULL;
};

template<class ContainerAllocator>
struct DataType< ::kuka_cv::Pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kuka_cv/Pose";
  }

  static const char* value(const ::kuka_cv::Pose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kuka_cv::Pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Position\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"# Orientation\n"
"float64 phi\n"
"float64 theta\n"
"float64 psi\n"
;
  }

  static const char* value(const ::kuka_cv::Pose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kuka_cv::Pose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.phi);
      stream.next(m.theta);
      stream.next(m.psi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kuka_cv::Pose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kuka_cv::Pose_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "phi: ";
    Printer<double>::stream(s, indent + "  ", v.phi);
    s << indent << "theta: ";
    Printer<double>::stream(s, indent + "  ", v.theta);
    s << indent << "psi: ";
    Printer<double>::stream(s, indent + "  ", v.psi);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KUKA_CV_MESSAGE_POSE_H