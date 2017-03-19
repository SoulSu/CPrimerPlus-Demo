#include "stdio.h"


// echo eof


int main()
{

    int ch ;
    
    while( (ch = getchar() ) != EOF ){
        putchar(ch);
    }

    return 0;
}




