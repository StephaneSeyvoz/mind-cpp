#include <stdio.h>
#include "generator.adl.hpp"

int generator::main(int argc, char **argv)
{
    printf("Start generator\n");
    if (!outputItf.IsNullInterface())
    {
        outputItf.increment(1);
        outputItf.twice(50);
    }
    if (!outputbiItf.IsNullInterface())
    {
        outputbiItf.sqrt(200);
    }

    return 0;
}
