#include "af.hpp"
#include "nwk.hpp"
#include "temperatureCluster.hpp"
#include "temperatureSensor.hpp"
#include "mainComponent.hpp"
#include "sys.hpp"
#include "led.hpp"
#include "zigBeeStack.hpp"
#include "FlashMng.hpp"

class ZigBeeSensor {
public:
  mainComponent mainComponentInstance;
private:
  temperatureCluster temperatureClusterInstance;
  temperatureSensor temperatureSensorInstance;
  zigBeeStack zigBeeStackInstance;
  af afInstance;
  nwk nwkInstance;
  sys sysInstance;
  led ledInstance;
  FlashMng FlashMngInstance;

public:
  ZigBeeSensor() {
    mainComponentInstance.clusteritf = &temperatureClusterInstance;
    temperatureClusterInstance.sensoritf = &temperatureSensorInstance;
    temperatureClusterInstance.temperaturesensoritf = &temperatureSensorInstance;
    mainComponentInstance.zigbeeitf = &zigBeeStackInstance;
    afInstance.nwkitf = &nwkInstance;
    nwkInstance.leditf = &zigBeeStackInstance;
    nwkInstance.flashmngitf = &zigBeeStackInstance;
    zigBeeStackInstance.leditf = &ledInstance;
    zigBeeStackInstance.flashmngitf = &FlashMngInstance;
    zigBeeStackInstance.afitf = &afInstance;

  };
  ~ZigBeeSensor() {};

};
