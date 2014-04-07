#ifndef _SENSORITF_HPP_
#define _SENSORITF_HPP_


class sensorItf {
public:
  inline sensorItf(){};
  virtual inline ~sensorItf(){};

  virtual int getSensorType(  
  void ) = 0;
  virtual void switchOn(  
  void ) = 0;
  virtual void switchOff(  
  void ) = 0;
  virtual void reset(  
  void ) = 0;
};

#endif /* _SENSORITF_HPP_ */
