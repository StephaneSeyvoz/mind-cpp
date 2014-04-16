#ifndef _LEDITF_HPP_
#define _LEDITF_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"







class ledItfDescriptor: public Mind::InterfaceDescriptor {
public:
  inline ledItfDescriptor(){};
  virtual inline ~ledItfDescriptor(){};

  virtual void led01On(  
  void ) = 0;
  virtual void led01Off(  
  void ) = 0;
  virtual void led02On(  
  void ) = 0;
  virtual void led02Off(  
  void ) = 0;
};

class ledItfReference: public Mind::InterfaceReference<ledItfDescriptor>, public ledItfDescriptor {
public:
  /* Concrete implementation of the ledItf ITF methods */
  inline void led01On(  
  void ) {
    return reference->led01On();
  }
  inline void led01Off(  
  void ) {
    return reference->led01Off();
  }
  inline void led02On(  
  void ) {
    return reference->led02On();
  }
  inline void led02Off(  
  void ) {
    return reference->led02Off();
  }
};

#endif /* _LEDITF_HPP_ */
