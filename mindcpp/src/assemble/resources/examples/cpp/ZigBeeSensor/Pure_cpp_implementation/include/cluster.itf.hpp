#ifndef _CLUSTERITF_HPP_
#define _CLUSTERITF_HPP_


class clusterItf {
public:
  inline clusterItf(){};
  virtual inline ~clusterItf(){};

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
};


#endif /* _CLUSTERITF_HPP_ */
