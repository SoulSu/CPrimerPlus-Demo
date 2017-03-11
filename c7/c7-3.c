#include "stdio.h"

int main()
{

    // printf("%c", getchar());

    long long rows = 0;

    char ch;
    while(ch = getchar() != EOF)
    {
        // printf("%c", ch);
        if(ch == '\n')
        {
            rows ++;
        }
    }

    printf("%ld", rows);


    return 0;
}