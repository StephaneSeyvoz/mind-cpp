/*
 * zigBeeStack.hpp
 *
 *  Created on: 18 mars 2014
 *      Author: SESA188919
 */

#ifndef ZIGBEESTACK_HPP_
#define ZIGBEESTACK_HPP_

#include "zigBeeItf.itf.hpp"
#include "led.itf.hpp"
#include "FlashMng.itf.hpp"
#include "af.itf.hpp"

class zigBeeStack: public zigBeeItf, public ledItf, public FlashMngItf {
public:
  ledItf *leditf;
  FlashMngItf *flashmngitf;
  afItf *afitf;

public:
    zigBeeStack() { leditf = 0x00; flashmngitf = 0x00; afitf = 0x00; };
    ~zigBeeStack() {};

    void zInit();

    /* provided delegation bindings */
	void zDataRequest(unsigned char*data){afitf->DataRequest(data);};

	/* required delegation bindings */
	void led01On() { leditf->led01On(); };
	void led01Off() { leditf->led01Off(); };
	void led02On() { leditf->led02On(); };
	void led02Off() { leditf->led02Off(); };

	void WritePage(int address,int byte){flashmngitf->WritePage(address, byte);};

	void ReadPage(  int address, int (* byte) )
	{
		flashmngitf->ReadPage(address, byte);
	};
};


#endif /* ZIGBEESTACK_HPP_ */
