#include <stdio.h>
#include "generator.hpp"

int entryPoint::main(int argc, char **argv)
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
