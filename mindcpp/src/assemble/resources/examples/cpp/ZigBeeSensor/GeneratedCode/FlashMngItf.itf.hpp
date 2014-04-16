#ifndef _FLASHMNGITF_HPP_
#define _FLASHMNGITF_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"





class FlashMngItfDescriptor: public Mind::InterfaceDescriptor {
public:
  inline FlashMngItfDescriptor(){};
  virtual inline ~FlashMngItfDescriptor(){};

  virtual void WritePage(  int address, int byte ) = 0;
  virtual void ReadPage(  int address, int (* byte) ) = 0;
};

class FlashMngItfReference: public Mind::InterfaceReference<FlashMngItfDescriptor>, public FlashMngItfDescriptor {
public:
  /* Concrete implementation of the FlashMngItf ITF methods */
  inline void WritePage(  int address, int byte ) {
    return reference->WritePage(address, byte);
  }
  inline void ReadPage(  int address, int (* byte) ) {
    return reference->ReadPage(address, byte);
  }
};

#endif /* _FLASHMNGITF_HPP_ */
