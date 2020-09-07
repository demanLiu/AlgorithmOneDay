#ifndef CC_TIME_H
#define CC_TIME_H

#include <time.h>

#define MACRO_TIME_BEGIN    \
    {                       \
        clock_t begin, end; \
        begin = clock();

#define MACRO_TIME_END                                                                     \
    end = clock();                                                                         \
    printf("\n run %s  time is %f s\n", __func__, (double)(end - begin) / CLOCKS_PER_SEC); \
    }

#endif