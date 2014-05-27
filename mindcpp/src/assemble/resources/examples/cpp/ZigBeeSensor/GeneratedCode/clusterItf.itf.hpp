#ifndef _CLUSTERITF_HPP_
#define _CLUSTERITF_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"









class clusterItfDescriptor: public Mind::InterfaceDescriptor {
public:
  inline clusterItfDescriptor(){};
  virtual inline ~clusterItfDescriptor(){};

  virtual void Init(  
  void ) = 0;
  virtual unsigned char getDirection(  
  void ) = 0;
  virtual unsigned short getClusterID(  
  void ) = 0;
  virtual unsigned char serialize(  unsigned char (* a_iSize), unsigned char (* a_pBuffer) ) = 0;
  virtual unsigned char deserialize(  unsigned char a_iInSize, unsigned char (* a_pInBuffer), unsigned char (* a_iOutSize), unsigned char (* a_pOutBuffer) ) = 0;
  virtual unsigned char update(  
  void ) = 0;
};

class clusterItfReference: public Mind::InterfaceReference<clusterItfDescriptor>, public clusterItfDescriptor {
public:
  /* Concrete implementation of the clusterItf ITF methods */
  inline void Init(  
  void ) {
    return reference->Init();
  }
  inline unsigned char getDirection(  
  void ) {
    return reference->getDirection();
  }
  inline unsigned short getClusterID(  
  void ) {
    return reference->getClusterID();
  }
  inline unsigned char serialize(  unsigned char (* a_iSize), unsigned char (* a_pBuffer) ) {
    return reference->serialize(a_iSize, a_pBuffer);
  }
  inline unsigned char deserialize(  unsigned char a_iInSize, unsigned char (* a_pInBuffer), unsigned char (* a_iOutSize), unsigned char (* a_pOutBuffer) ) {
    return reference->deserialize(a_iInSize, a_pInBuffer, a_iOutSize, a_pOutBuffer);
  }
  inline unsigned char update(  
  void ) {
    return reference->update();
  }
};

#endif /* _CLUSTERITF_HPP_ */
