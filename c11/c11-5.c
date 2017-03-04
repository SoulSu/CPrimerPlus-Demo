#include "stdio.h"

#define SIZE 10

int main()
{

    char *str1 = "abcd";
    char str2[SIZE] = {"123456789"};
    int i = 0;

    for(i = 0; i < SIZE; i++) {
        printf("%c-", str2[i]);
    }
    
    printf("\n");
    printf("%s\n", strcpy(str2, str1));
    
    for(i = 0; i < SIZE; i++) {
        printf("%c-", str2[i]);
    }
    printf("\n");


    return 0;
}