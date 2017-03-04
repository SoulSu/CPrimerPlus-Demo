#include "stdio.h"


int main()
{

    char *str = "abc";

    char *str1 = str;


    printf("str => %p  only => %p \n", &str, "abc");

    printf("str1 => %p  only => %p \n", &str1, "abc");


    return 0;
}