#ifndef _NWKITF_HPP_
#define _NWKITF_HPP_


class nwkItf {
public:
  inline nwkItf(){};
  virtual inline ~nwkItf(){};

  virtual void SendRequest(  unsigned char (* a_data) ) = 0;
};

#endif /* _NWKITF_HPP_ */
