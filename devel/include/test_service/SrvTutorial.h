// Generated by gencpp from file test_service/SrvTutorial.msg
// DO NOT EDIT!


#ifndef TEST_SERVICE_MESSAGE_SRVTUTORIAL_H
#define TEST_SERVICE_MESSAGE_SRVTUTORIAL_H

#include <ros/service_traits.h>


#include <test_service/SrvTutorialRequest.h>
#include <test_service/SrvTutorialResponse.h>


namespace test_service
{

struct SrvTutorial
{

typedef SrvTutorialRequest Request;
typedef SrvTutorialResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SrvTutorial
} // namespace test_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test_service::SrvTutorial > {
  static const char* value()
  {
    return "d431cae597499d244ef1c576e21358c8";
  }

  static const char* value(const ::test_service::SrvTutorial&) { return value(); }
};

template<>
struct DataType< ::test_service::SrvTutorial > {
  static const char* value()
  {
    return "test_service/SrvTutorial";
  }

  static const char* value(const ::test_service::SrvTutorial&) { return value(); }
};


// service_traits::MD5Sum< ::test_service::SrvTutorialRequest> should match 
// service_traits::MD5Sum< ::test_service::SrvTutorial > 
template<>
struct MD5Sum< ::test_service::SrvTutorialRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test_service::SrvTutorial >::value();
  }
  static const char* value(const ::test_service::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test_service::SrvTutorialRequest> should match 
// service_traits::DataType< ::test_service::SrvTutorial > 
template<>
struct DataType< ::test_service::SrvTutorialRequest>
{
  static const char* value()
  {
    return DataType< ::test_service::SrvTutorial >::value();
  }
  static const char* value(const ::test_service::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test_service::SrvTutorialResponse> should match 
// service_traits::MD5Sum< ::test_service::SrvTutorial > 
template<>
struct MD5Sum< ::test_service::SrvTutorialResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test_service::SrvTutorial >::value();
  }
  static const char* value(const ::test_service::SrvTutorialResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test_service::SrvTutorialResponse> should match 
// service_traits::DataType< ::test_service::SrvTutorial > 
template<>
struct DataType< ::test_service::SrvTutorialResponse>
{
  static const char* value()
  {
    return DataType< ::test_service::SrvTutorial >::value();
  }
  static const char* value(const ::test_service::SrvTutorialResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_SERVICE_MESSAGE_SRVTUTORIAL_H
