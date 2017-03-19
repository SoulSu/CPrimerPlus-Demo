#include "stdio.h"
#include "ctype.h"


int main()
{   

    char ch = 'A';

    if(isupper(ch))
    {
        printf("is upper");
    }
    else
    {
        printf("is not upper");
    }


    return 0;
}
