#ifndef sink_HPP_
#define sink_HPP_

class sink: public sinkDefinition {
protected:
public:
    virtual void increment(uint32_t input);
    virtual void twice(uint32_t input);
};

#endif /* sink_HPP_ */

