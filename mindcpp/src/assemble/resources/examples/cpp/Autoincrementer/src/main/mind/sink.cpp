#include <stdio.h>
#include "sink.adl.hpp"

void sink::increment(uint32_t input)
{
    printf("receive on increment %d\n", input);
}

void sink::twice(uint32_t input)
{
    printf("receive on twice %d\n", input);
}
