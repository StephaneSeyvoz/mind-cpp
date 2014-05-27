/*
 * zigBeeStack.hpp
 *
 *  Created on: 18 mars 2014
 *      Author: SESA188919
 */

#ifndef ZIGBEESTACK_HPP_
#define ZIGBEESTACK_HPP_

class zigBeeStack: public zigBeeStackDefinition {
protected:
public:
	virtual void DataRequest(unsigned char*);
};


#endif /* ZIGBEESTACK_HPP_ */
