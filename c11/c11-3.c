#include "stdio.h"
#include "strings.h"

int main()
{

    char input[100];

    while( fgets(input, 10, stdin) != EOF ) {
        
        if( input[strlen(input)-1] == '\n' ){
            printf("over");
            break;
        }

        fputs(input, stdout);

    }

    return 0;
}