#include <stdio.h>
#include "incrementer.adl.hpp"

/* implement api.increment.itf */
void incrementer::increment(uint32_t input)
{
    printf("input.increment(this=0x%08x) with input = %d\n", this, input);
    if (!outputItf.IsNullInterface())
    {
        printf("Result = %d\n", input + 1);
        outputItf.increment(input + 1);
    }
}

void incrementer::twice(uint32_t input)
{
    printf("input.twice(this=0x%08x) with input = %d\n", this, input);
    if (!outputItf.IsNullInterface())
    {
        printf("Result =  %d\n", input + input);
        outputItf.twice(input + input);
    }
}

void incrementer::sqrt(uint32_t input)
{
    if (!outputbiItf.IsNullInterface())
    {
        outputbiItf.sqrt(input * input);
    }
}


/* implement lifecycle.starter */
void incrementer::start()
{
    printf("Hello world from starter (0x%08x)\n", this);
}

/* implement lifecycle.stopper */
void incrementer::stop()
{
    printf("Hello world from stopper (0x%08x)\n", this);
}
