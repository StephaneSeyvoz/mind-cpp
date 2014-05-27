#ifndef _SENSORITF_HPP_
#define _SENSORITF_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"







class sensorItfDescriptor: public Mind::InterfaceDescriptor {
public:
  inline sensorItfDescriptor(){};
  virtual inline ~sensorItfDescriptor(){};

  virtual int getSensorType(  
  void ) = 0;
  virtual void switchOn(  
  void ) = 0;
  virtual void switchOff(  
  void ) = 0;
  virtual void reset(  
  void ) = 0;
};

class sensorItfReference: public Mind::InterfaceReference<sensorItfDescriptor>, public sensorItfDescriptor {
public:
  /* Concrete implementation of the sensorItf ITF methods */
  inline int getSensorType(  
  void ) {
    return reference->getSensorType();
  }
  inline void switchOn(  
  void ) {
    return reference->switchOn();
  }
  inline void switchOff(  
  void ) {
    return reference->switchOff();
  }
  inline void reset(  
  void ) {
    return reference->reset();
  }
};

#endif /* _SENSORITF_HPP_ */
