/* Generated file: temperatureCluster.adl.hpp */
#ifndef __COMPONENT_TEMPERATURECLUSTER_ADL_HPP
#define __COMPONENT_TEMPERATURECLUSTER_ADL_HPP

#include "mindcommon.hpp"

/* Start including the interface descriptions */
#include "clusterItf.itf.hpp"
#include "temperatureItf.itf.hpp"
#include "sensorItf.itf.hpp"
/* End including the interface descriptions */

/* Start definition of component type */
class temperatureClusterDefinition : public clusterItfDescriptor {
 
public:
  // constructor and destructor
  inline temperatureClusterDefinition(){};
  inline ~temperatureClusterDefinition(){};
public:
  // prototypes
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
public:
  temperatureItfReference temperatureitf;
  sensorItfReference sensoritf;
};
/* End  definition of component type */

#include "temperatureCluster.hpp"
#endif /* __COMPONENT_TEMPERATURECLUSTER_ADL_HPP */
