#ifndef _SYSITF_HPP_
#define _SYSITF_HPP_

class sysItf {
public:
  inline sysItf(){};
  virtual inline ~sysItf(){};

  virtual void Init(  
  void ) = 0;
};


#endif /* _SYSITF_HPP_ */
