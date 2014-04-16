/* Generated file: mainComponent.adl.hpp */
#ifndef __COMPONENT_MAINCOMPONENT_ADL_HPP
#define __COMPONENT_MAINCOMPONENT_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "mindcpp\boot\Main.itf.hpp"
#include "zigBeeItf.itf.hpp"
#include "clusterItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class mainComponentDefinition : public mindcpp_boot_MainDescriptor {
 
public:
  // constructor and destructor
  inline mainComponentDefinition(){};
  inline ~mainComponentDefinition(){};
public:
  // prototypes
  virtual int main(  int argc, char (* (* argv)) ) = 0;
public:
  zigBeeItfReference zigbeeitf;
  clusterItfReference cluster;
};
/* End  definition of component type */

#include "mainComponent.hpp"
#endif /* __COMPONENT_MAINCOMPONENT_ADL_HPP */
