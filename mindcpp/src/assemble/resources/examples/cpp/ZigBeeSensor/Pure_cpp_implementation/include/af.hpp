/*
 * af.hpp
 *
 *  Created on: 19 mars 2014
 *      Author: SESA188919
 */

#ifndef AF_HPP_
#define AF_HPP_

#include "af.itf.hpp"
#include "nwk.itf.hpp"

class af: public afItf {
public:
  nwkItf *nwkitf;
public:
  af() { nwkitf = 0x00; };
  ~af() { };
	virtual void DataRequest(unsigned char*);
};


#endif /* AF_HPP_ */
