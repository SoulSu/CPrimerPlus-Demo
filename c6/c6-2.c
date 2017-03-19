#include "stdio.h"


int main()
{


    int i , j;

    char c = 'A';

    for(i = 1; i <= 6; i++){
        for(j = 0; j < i; j++ ){
            printf("%c", c);
            c = c + 1;
        }
        printf("\n");
    }

    return 0;
}