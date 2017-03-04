#include "stdio.h"

// like linux tool command `wc`

int main()
{

    int ch;
    int bit = 0;
    int rows = 0;

    while( (ch = getchar()) != EOF ){
        if( ch == '\n'){
            rows++;
        }
        bit++;
    }

    printf("%10d  %10d\n", rows, bit);


    return 0;
}