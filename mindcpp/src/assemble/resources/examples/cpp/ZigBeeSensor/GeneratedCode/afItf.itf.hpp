#ifndef _AFITF_HPP_
#define _AFITF_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"



class afItfDescriptor: public Mind::InterfaceDescriptor {
public:
  inline afItfDescriptor(){};
  virtual inline ~afItfDescriptor(){};

  virtual void DataRequest(  unsigned char (* a_data) ) = 0;
};

class afItfReference: public Mind::InterfaceReference<afItfDescriptor>, public afItfDescriptor {
public:
  /* Concrete implementation of the afItf ITF methods */
  inline void DataRequest(  unsigned char (* a_data) ) {
    return reference->DataRequest(a_data);
  }
};

#endif /* _AFITF_HPP_ */
