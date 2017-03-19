#include "stdio.h"


int main()
{

    int x, y, z;

    x = (y = 3, (z = ++y +2) +5);

    printf("x=%d,y=%d,z=%d\n",x,y,z);

    return 0;
}