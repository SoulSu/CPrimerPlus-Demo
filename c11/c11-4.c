#include "stdio.h"
#include "strings.h"


int main()
{

    const char *str1 = "main";

    char *streq = str1;

    printf("str1 %p , streq %p iseq %d\n", str1, streq, str1 != streq);

    char strcp[100];
    printf("strcpy result point address => %p \n", strcpy(strcp, str1));
    printf("str1 %p val=> %s , strcp %p val => %s \n", str1, str1, strcp, strcp);


    return 0;
}