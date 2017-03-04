#include "stdio.h"


int main()
{

    char *str = "1234567890";


    printf("p=%p , 0p = %p, %c \n", str, &str[0], str[0]);
    printf("p+1=%p , 1p = %p, %c \n", str+1, &str[1], str[1]);



    return 0;
}