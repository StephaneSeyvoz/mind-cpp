/* Generated file: af.adl.hpp */
#ifndef __COMPONENT_AF_ADL_HPP
#define __COMPONENT_AF_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "afItf.itf.hpp"
#include "nwkItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class afDefinition : public afItfDescriptor {
 
public:
  // constructor and destructor
  inline afDefinition(){};
  inline ~afDefinition(){};
public:
  // prototypes
  virtual void DataRequest(  unsigned char (* a_data) ) = 0;
public:
  nwkItfReference nwkitf;
};
/* End  definition of component type */

#include "af.hpp"
#endif /* __COMPONENT_AF_ADL_HPP */
