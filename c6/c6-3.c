#include "stdio.h"

int main()
{

    double f[10];

    printf("input a float num: ");

    scanf("%lf", &f[0]);

    int i = 0;
    for(i = 0; i < 10; i++){
        printf("%lf %p\n", f[i], &f[i]);
    }

    return 0;
}