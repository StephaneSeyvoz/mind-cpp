#ifndef _LEDITF_HPP_
#define _LEDITF_HPP_


class ledItf {
public:
  inline ledItf(){};
  virtual inline ~ledItf(){};

  virtual void led01On(  
  void ) = 0;
  virtual void led01Off(  
  void ) = 0;
  virtual void led02On(  
  void ) = 0;
  virtual void led02Off(  
  void ) = 0;
};

#endif /* _LEDITF_HPP_ */
