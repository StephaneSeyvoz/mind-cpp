#ifndef sink_HPP_
#define sink_HPP_

#include "sink.adl.hpp"

using namespace __ns_sink;

class sink: public sinkDefinition {
protected:
public:
    virtual void increment(uint32_t input);
    virtual void twice(uint32_t input);
};

#endif /* sink_HPP_ */

