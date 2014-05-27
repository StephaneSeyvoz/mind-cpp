/*
 * nwk.hpp
 *
 *  Created on: 19 mars 2014
 *      Author: SESA188919
 */

#ifndef NWK_HPP_
#define NWK_HPP_

#include "nwk.itf.hpp"
#include "led.itf.hpp"
#include "FlashMng.itf.hpp"

class nwk: public nwkItf {
public:
  FlashMngItf *flashmngitf;
  ledItf *leditf;

public:
  nwk() { flashmngitf = 0x00; leditf = 0x00; };
  ~nwk() {};
	virtual void SendRequest(unsigned char*);
};


#endif /* NWK_HPP_ */
