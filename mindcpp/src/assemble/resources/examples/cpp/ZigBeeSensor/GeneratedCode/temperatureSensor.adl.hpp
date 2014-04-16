/* Generated file: temperatureSensor.adl.hpp */
#ifndef __COMPONENT_TEMPERATURESENSOR_ADL_HPP
#define __COMPONENT_TEMPERATURESENSOR_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "sensorItf.itf.hpp"
#include "temperatureItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class temperatureSensorDefinition : public sensorItfDescriptor, public temperatureItfDescriptor {
 
public:
  // constructor and destructor
  inline temperatureSensorDefinition(){};
  inline ~temperatureSensorDefinition(){};
public:
  // prototypes
  virtual int getSensorType(  
  void ) = 0;
  virtual void switchOn(  
  void ) = 0;
  virtual void switchOff(  
  void ) = 0;
  virtual void reset(  
  void ) = 0;
  virtual unsigned char GetCurrentTemperature(  signed short (* data) ) = 0;
  virtual unsigned char GetMaxTemperature(  signed short (* data) ) = 0;
  virtual unsigned char GetMinTemperature(  signed short (* data) ) = 0;
  virtual unsigned char GetTemperatureAccuracy(  unsigned short (* data) ) = 0;
};
/* End  definition of component type */

#include "temperatureSensor.hpp"
#endif /* __COMPONENT_TEMPERATURESENSOR_ADL_HPP */
