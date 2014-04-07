#ifndef _AFITF_HPP_
#define _AFITF_HPP_

class afItf {
public:
  inline afItf(){};
  virtual inline ~afItf(){};

  virtual void DataRequest(  unsigned char (* a_data) ) = 0;
};

#endif /* _AFITF_HPP_ */
