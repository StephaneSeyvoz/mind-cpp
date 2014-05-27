#ifndef _TEMPERATUREITF_HPP_
#define _TEMPERATUREITF_HPP_


class temperatureSensorItf {
public:
  inline temperatureSensorItf(){};
  virtual inline ~temperatureSensorItf(){};

  virtual unsigned char GetCurrentTemperature(  signed short (* data) ) = 0;
  virtual unsigned char GetMaxTemperature(  signed short (* data) ) = 0;
  virtual unsigned char GetMinTemperature(  signed short (* data) ) = 0;
  virtual unsigned char GetTemperatureAccuracy(  unsigned short (* data) ) = 0;
};

#endif /* _TEMPERATUREITF_HPP_ */
