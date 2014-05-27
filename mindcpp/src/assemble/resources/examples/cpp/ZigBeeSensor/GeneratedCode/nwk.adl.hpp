/* Generated file: nwk.adl.hpp */
#ifndef __COMPONENT_NWK_ADL_HPP
#define __COMPONENT_NWK_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "nwkItf.itf.hpp"
#include "ledItf.itf.hpp"
#include "FlashMngItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class nwkDefinition : public nwkItfDescriptor {
 
public:
  // constructor and destructor
  inline nwkDefinition(){};
  inline ~nwkDefinition(){};
public:
  // prototypes
  virtual void SendRequest(  unsigned char (* a_data) ) = 0;
public:
  ledItfReference leditf;
  FlashMngItfReference flashmngitf;
};
/* End  definition of component type */

#include "nwk.hpp"
#endif /* __COMPONENT_NWK_ADL_HPP */
