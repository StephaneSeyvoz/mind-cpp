#ifndef _ZIGBEEITF_HPP_
#define _ZIGBEEITF_HPP_


class zigBeeItf {
public:
  inline zigBeeItf(){};
  virtual inline ~zigBeeItf(){};

  virtual void zDataRequest(  unsigned char (* p0) ) = 0;
  virtual void zInit(
  void ) = 0;
};

#endif /* _ZIGBEEITF_HPP_ */
