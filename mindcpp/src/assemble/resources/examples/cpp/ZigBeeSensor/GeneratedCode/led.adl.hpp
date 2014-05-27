/* Generated file: led.adl.hpp */
#ifndef __COMPONENT_LED_ADL_HPP
#define __COMPONENT_LED_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "ledItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class ledDefinition : public ledItfDescriptor {
 
public:
  // constructor and destructor
  inline ledDefinition(){};
  inline ~ledDefinition(){};
public:
  // prototypes
  virtual void led01On(  
  void ) = 0;
  virtual void led01Off(  
  void ) = 0;
  virtual void led02On(  
  void ) = 0;
  virtual void led02Off(  
  void ) = 0;
};
/* End  definition of component type */

#include "led.hpp"
#endif /* __COMPONENT_LED_ADL_HPP */
