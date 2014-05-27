/* Generated file: sys.adl.hpp */
#ifndef __COMPONENT_SYS_ADL_HPP
#define __COMPONENT_SYS_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "sysItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class sysDefinition : public sysItfDescriptor {
 
public:
  // constructor and destructor
  inline sysDefinition(){};
  inline ~sysDefinition(){};
public:
  // prototypes
  virtual void Init(  
  void ) = 0;
};
/* End  definition of component type */

#include "sys.hpp"
#endif /* __COMPONENT_SYS_ADL_HPP */
