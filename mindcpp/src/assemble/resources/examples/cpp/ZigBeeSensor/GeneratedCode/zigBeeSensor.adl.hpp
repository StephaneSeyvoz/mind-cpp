/* Generated file: zigBeeSensor.adl.hpp */
#ifndef __COMPONENT_ZIGBEESENSOR_ADL_HPP
#define __COMPONENT_ZIGBEESENSOR_ADL_HPP

#include "mindcommon.hpp"

/* Start including the sub-component descriptions */
#include "mindcpp\boot\BootStrap.adl.hpp"
#include "mainComponent.adl.hpp"
#include "temperatureCluster.adl.hpp"
#include "temperatureSensor.adl.hpp"
#include "led.adl.hpp"
#include "FlashMng.adl.hpp"
#include "af.adl.hpp"
#include "nwk.adl.hpp"
#include "sys.adl.hpp"
#include "zigbeestackComponentAPI.adl.hpp"
/* End including the sub-component descriptions */

/* Start definition of component type */
class zigBeeSensorDefinition  {
public:
  // sub-components
  mindcpp_boot_BootStrap _mind_BootInstance;
  mainComponent _mind_mainInstance;
  temperatureCluster _mind_temperatureClusterInstance;
  temperatureSensor _mind_temperatureSensorInstance;
  led _mind_ledInstance;
  FlashMng _mind_flashmngInstance;
  af _mind_zigBeeStackInstance_afInstance;
  nwk _mind_zigBeeStackInstance_nwkInstance;
  sys _mind_zigBeeStackInstance_sysInstance;
  zigbeestackComponentAPI _mind_zigBeeStackInstance_zigbeestackAPI;

public:
  // bindings initialization between sub-components
  zigBeeSensorDefinition(){
     _mind_BootInstance.entryPoint.reference=&_mind_mainInstance;
     _mind_mainInstance.cluster.reference=&_mind_temperatureClusterInstance;
     _mind_mainInstance.zigbeeitf.reference=&_mind_zigBeeStackInstance_zigbeestackAPI;
     _mind_temperatureClusterInstance.temperatureitf.reference=&_mind_temperatureSensorInstance;
     _mind_temperatureClusterInstance.sensoritf.reference=&_mind_temperatureSensorInstance;
     _mind_zigBeeStackInstance_nwkInstance.leditf.reference=&_mind_ledInstance;
     _mind_zigBeeStackInstance_nwkInstance.flashmngitf.reference=&_mind_flashmngInstance;
     _mind_zigBeeStackInstance_zigbeestackAPI.afitf.reference=&_mind_zigBeeStackInstance_afInstance;
     _mind_zigBeeStackInstance_zigbeestackAPI.sysitf.reference=&_mind_zigBeeStackInstance_sysInstance;
     _mind_zigBeeStackInstance_afInstance.nwkitf.reference=&_mind_zigBeeStackInstance_nwkInstance;
  }

  ~zigBeeSensorDefinition(){};
};
/* End  definition of component type */

#endif /* __COMPONENT_ZIGBEESENSOR_ADL_HPP */
