#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "addSubNum.h"  // static lib

int main()
{
    // gen random num
    time_t t;
    srand( (unsigned int )time( &t ) );
    int numA = rand();
    int numB = rand();

    int answer;

    answer = addNum( numA, numB );
    printf("%d + %d = %d\n",numA, numB, answer );

    answer = subNum( numA, numB );
    printf("%d - %d = %d\n",numA, numB, answer );

    return 0;
}
