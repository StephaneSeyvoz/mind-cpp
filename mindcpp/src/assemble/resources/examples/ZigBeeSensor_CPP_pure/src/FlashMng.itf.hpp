#ifndef _FLASHMNGITF_HPP_
#define _FLASHMNGITF_HPP_

/* This file is a generated file, do not edit. */


class FlashMngItf {
public:
  inline FlashMngItf(){};
  virtual inline ~FlashMngItf(){};

  virtual void WritePage(  int address, int byte ) = 0;
  virtual void ReadPage(  int address, int (* byte) ) = 0;
};

#endif /* _FLASHMNGITF_HPP_ */
