#ifndef _MEMORY_API_ALLOCATOR_HPP_
#define _MEMORY_API_ALLOCATOR_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"





class memory_api_AllocatorDescriptor: public Mind::InterfaceDescriptor {
public:
  inline memory_api_AllocatorDescriptor(){};
  virtual inline ~memory_api_AllocatorDescriptor(){};

  virtual void (* alloc(  int size )) = 0;
  virtual void free(  void (* addr) ) = 0;
};

class memory_api_AllocatorReference: public Mind::InterfaceReference<memory_api_AllocatorDescriptor>, public memory_api_AllocatorDescriptor {
public:
  /* Concrete implementation of the memory_api_Allocator ITF methods */
  inline void (* alloc(  int size )) {
    return reference->alloc(size);
  }
  inline void free(  void (* addr) ) {
    return reference->free(addr);
  }
};

#endif /* _MEMORY_API_ALLOCATOR_HPP_ */
