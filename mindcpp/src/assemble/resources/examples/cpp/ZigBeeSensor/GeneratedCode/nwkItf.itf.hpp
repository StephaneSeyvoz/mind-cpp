#ifndef _NWKITF_HPP_
#define _NWKITF_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"



class nwkItfDescriptor: public Mind::InterfaceDescriptor {
public:
  inline nwkItfDescriptor(){};
  virtual inline ~nwkItfDescriptor(){};

  virtual void SendRequest(  unsigned char (* a_data) ) = 0;
};

class nwkItfReference: public Mind::InterfaceReference<nwkItfDescriptor>, public nwkItfDescriptor {
public:
  /* Concrete implementation of the nwkItf ITF methods */
  inline void SendRequest(  unsigned char (* a_data) ) {
    return reference->SendRequest(a_data);
  }
};

#endif /* _NWKITF_HPP_ */
