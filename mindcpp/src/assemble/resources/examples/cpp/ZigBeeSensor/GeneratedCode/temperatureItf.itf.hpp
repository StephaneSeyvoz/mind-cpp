#ifndef _TEMPERATUREITF_HPP_
#define _TEMPERATUREITF_HPP_

/* This file is a generated file, do not edit. */

#include "mindcommon.hpp"
#include "mindcpp/idl/InterfaceDescriptor.hpp"
#include "mindcpp/idl/InterfaceReference.hpp"







class temperatureItfDescriptor: public Mind::InterfaceDescriptor {
public:
  inline temperatureItfDescriptor(){};
  virtual inline ~temperatureItfDescriptor(){};

  virtual unsigned char GetCurrentTemperature(  signed short (* data) ) = 0;
  virtual unsigned char GetMaxTemperature(  signed short (* data) ) = 0;
  virtual unsigned char GetMinTemperature(  signed short (* data) ) = 0;
  virtual unsigned char GetTemperatureAccuracy(  unsigned short (* data) ) = 0;
};

class temperatureItfReference: public Mind::InterfaceReference<temperatureItfDescriptor>, public temperatureItfDescriptor {
public:
  /* Concrete implementation of the temperatureItf ITF methods */
  inline unsigned char GetCurrentTemperature(  signed short (* data) ) {
    return reference->GetCurrentTemperature(data);
  }
  inline unsigned char GetMaxTemperature(  signed short (* data) ) {
    return reference->GetMaxTemperature(data);
  }
  inline unsigned char GetMinTemperature(  signed short (* data) ) {
    return reference->GetMinTemperature(data);
  }
  inline unsigned char GetTemperatureAccuracy(  unsigned short (* data) ) {
    return reference->GetTemperatureAccuracy(data);
  }
};

#endif /* _TEMPERATUREITF_HPP_ */
