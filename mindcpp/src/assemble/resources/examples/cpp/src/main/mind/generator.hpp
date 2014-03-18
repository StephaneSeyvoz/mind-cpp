#ifndef generator_HPP_
#define generator_HPP_

#include "generator.adl.hpp"

using namespace __ns_generator;

class generator: public generatorDefinition {
protected:
public:
	virtual int main(  int argc, char (* (* argv)) );
};

#endif /* generator_HPP_ */

