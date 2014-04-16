/* Generated file: zigBeeStack_anon_0.adl.hpp */
#ifndef __COMPONENT_ZIGBEESTACK_ANON_0_ADL_HPP
#define __COMPONENT_ZIGBEESTACK_ANON_0_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "zigBeeItf.itf.hpp"
#include "afItf.itf.hpp"
#include "sysItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class zigBeeStack_anon_0Definition : public zigBeeItfDescriptor {
 
public:
  // constructor and destructor
  inline zigBeeStack_anon_0Definition(){};
  inline ~zigBeeStack_anon_0Definition(){};
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

#include "zigBeeStack_anon_0.hpp"
#endif /* __COMPONENT_ZIGBEESTACK_ANON_0_ADL_HPP */
