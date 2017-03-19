#include "stdio.h"



// return a string with func


char *getName(void);

int main()
{

    char *name;

    name = getName();

    printf("%s   %p\n", name);

    return 0;
}


char *getName(void)
{
    char *name = "Hello";
    printf("%p\n", name);
    char name1[10] = {'H','e','l','l','o'};
    printf("%p\n", name1);

    return name;
}