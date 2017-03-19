#include "stdio.h"
#include "string.h"

int main()
{

    char *str = "你好";

    int len = 0;

    len = strlen(str);

    printf("%d \n", len);

    printf("%d \n", strcmp("a","ab"));
    printf("%d \n", strcmp("a","a"));
    printf("%d \n", strcmp("ab","a"));


    return 0;
}