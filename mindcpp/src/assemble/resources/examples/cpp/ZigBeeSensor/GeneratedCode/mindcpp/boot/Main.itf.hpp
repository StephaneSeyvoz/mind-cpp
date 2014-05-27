#ifndef _MINDCPP_BOOT_MAIN_HPP_
#define _MINDCPP_BOOT_MAIN_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"



class mindcpp_boot_MainDescriptor: public Mind::InterfaceDescriptor {
public:
  inline mindcpp_boot_MainDescriptor(){};
  virtual inline ~mindcpp_boot_MainDescriptor(){};

  virtual int main(  int argc, char (* (* argv)) ) = 0;
};

class mindcpp_boot_MainReference: public Mind::InterfaceReference<mindcpp_boot_MainDescriptor>, public mindcpp_boot_MainDescriptor {
public:
  /* Concrete implementation of the mindcpp_boot_Main ITF methods */
  inline int main(  int argc, char (* (* argv)) ) {
    return reference->main(argc, argv);
  }
};

#endif /* _MINDCPP_BOOT_MAIN_HPP_ */
