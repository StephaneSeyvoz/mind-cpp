#ifndef _SYSITF_HPP_
#define _SYSITF_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"



class sysItfDescriptor: public Mind::InterfaceDescriptor {
public:
  inline sysItfDescriptor(){};
  virtual inline ~sysItfDescriptor(){};

  virtual void Init(  
  void ) = 0;
};

class sysItfReference: public Mind::InterfaceReference<sysItfDescriptor>, public sysItfDescriptor {
public:
  /* Concrete implementation of the sysItf ITF methods */
  inline void Init(  
  void ) {
    return reference->Init();
  }
};

#endif /* _SYSITF_HPP_ */
