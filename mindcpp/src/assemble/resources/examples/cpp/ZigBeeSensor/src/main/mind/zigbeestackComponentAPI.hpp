/*
 * zigbeestackComponentAPI.hpp
 *
 *  Created on: 28 avr. 2014
 *      Author: SESA188919
 */

#ifndef ZIGBEESTACKCOMPONENTAPI_HPP_
#define ZIGBEESTACKCOMPONENTAPI_HPP_

class zigbeestackComponentAPI: public zigbeestackComponentAPIDefinition {
protected:
public:
	virtual void DataRequest(unsigned char*);
	virtual void Init(void );
};



#endif /* ZIGBEESTACKCOMPONENTAPI_HPP_ */
