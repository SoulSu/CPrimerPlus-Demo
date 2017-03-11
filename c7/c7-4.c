#include "stdio.h"


#define DOLLOR 1000



int main()
{

    float hours;
    printf("input work hours:");
    scanf("%f", &hours);

    float real_hours = hours;

    if( hours > 40 )
    {
        real_hours = (hours - 40) * 1.5;
    }

    float total_money = DOLLOR * real_hours;

    float sl = 0.0;
    if( total_money >= 300 )
    {
        sl = 300 * 0.15;
    }

    if( total_money >= 300 && total_money <= 450)
    {
        sl += ( 150 * 0.2);
    }

    if( total_money > 450)
    {
        sl += (total_money - 450) * 0.25;
    }

    total_money -= sl;

    printf("%.2f\n", total_money);

    return 0;
}