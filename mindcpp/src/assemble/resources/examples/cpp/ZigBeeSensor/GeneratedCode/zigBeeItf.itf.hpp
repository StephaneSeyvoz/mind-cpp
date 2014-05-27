#ifndef _ZIGBEEITF_HPP_
#define _ZIGBEEITF_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"





class zigBeeItfDescriptor: public Mind::InterfaceDescriptor {
public:
  inline zigBeeItfDescriptor(){};
  virtual inline ~zigBeeItfDescriptor(){};

  virtual void DataRequest(  unsigned char (* p0) ) = 0;
  virtual void Init(  
  void ) = 0;
};

class zigBeeItfReference: public Mind::InterfaceReference<zigBeeItfDescriptor>, public zigBeeItfDescriptor {
public:
  /* Concrete implementation of the zigBeeItf ITF methods */
  inline void DataRequest(  unsigned char (* p0) ) {
    return reference->DataRequest(p0);
  }
  inline void Init(  
  void ) {
    return reference->Init();
  }
};

#endif /* _ZIGBEEITF_HPP_ */
