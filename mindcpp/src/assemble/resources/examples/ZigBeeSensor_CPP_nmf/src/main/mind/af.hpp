/*
 * af.hpp
 *
 *  Created on: 19 mars 2014
 *      Author: SESA188919
 */

#ifndef AF_HPP_
#define AF_HPP_

#include "af.adl.hpp"

class af: public afDefinition {
protected:
public:
	virtual void DataRequest(unsigned char*);
};


#endif /* AF_HPP_ */
