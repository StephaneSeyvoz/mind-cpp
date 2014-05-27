/* Generated file: FlashMng.adl.hpp */
#ifndef __COMPONENT_FLASHMNG_ADL_HPP
#define __COMPONENT_FLASHMNG_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "FlashMngItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class FlashMngDefinition : public FlashMngItfDescriptor {
 
public:
  // constructor and destructor
  inline FlashMngDefinition(){};
  inline ~FlashMngDefinition(){};
public:
  // prototypes
  virtual void WritePage(  int address, int byte ) = 0;
  virtual void ReadPage(  int address, int (* byte) ) = 0;
};
/* End  definition of component type */

#include "FlashMng.hpp"
#endif /* __COMPONENT_FLASHMNG_ADL_HPP */
