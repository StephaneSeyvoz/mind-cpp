/*
 * nwk.cpp
 *
 *  Created on: 19 mars 2014
 *      Author: SESA188919
 */


#include <stdio.h>

#include "nwk.adl.hpp"


void nwk::SendRequest(unsigned char* a_data) {
	leditf.led01On();
	printf("Send data to the ZigBee network : h%x h%x h%x h%x h%x\n", a_data[0], a_data[1], a_data[2], a_data[3], a_data[4]);
	flashmngitf.WritePage(1,2);
	leditf.led01Off();
}
