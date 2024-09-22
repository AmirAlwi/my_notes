/**
 * @brief example for introduction to GCC compilation
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // libc
    // startup msg
    printf("hello world !!\n");

    // lib
    // set up time
    time_t t;
    // set random seed
    srand( (unsigned int)time( &t ) );
    //get random num
    int randNum = rand();

    // libm
    double sq = sqrt( randNum );

    printf("Sequence root of %d is %f\n",randNum, sq );

    return 0;
}