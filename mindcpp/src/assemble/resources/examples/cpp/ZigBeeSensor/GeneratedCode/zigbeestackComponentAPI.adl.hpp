/* Generated file: zigbeestackComponentAPI.adl.hpp */
#ifndef __COMPONENT_ZIGBEESTACKCOMPONENTAPI_ADL_HPP
#define __COMPONENT_ZIGBEESTACKCOMPONENTAPI_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "zigBeeItf.itf.hpp"
#include "afItf.itf.hpp"
#include "sysItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class zigbeestackComponentAPIDefinition : public zigBeeItfDescriptor {
 
public:
  // constructor and destructor
  inline zigbeestackComponentAPIDefinition(){};
  inline ~zigbeestackComponentAPIDefinition(){};
public:
  // prototypes
  virtual void DataRequest(  unsigned char (* p0) ) = 0;
  virtual void Init(  
  void ) = 0;
public:
  afItfReference afitf;
  sysItfReference sysitf;
};
/* End  definition of component type */

#include "zigbeestackComponentAPI.hpp"
#endif /* __COMPONENT_ZIGBEESTACKCOMPONENTAPI_ADL_HPP */
