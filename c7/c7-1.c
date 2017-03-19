#include "stdio.h"

int main()
{
    const int len = 10;
    int i = 0;

    char ch[len];

    printf("input you password: ");
    ch[i++] = getchar();
    while(ch != '\n'){
        
        ch[i++] = getchar();
        if(i >= len){
            printf("read over!\n");
            break;
        }

    }

    printf("you input is[%s]\n", ch);
    return 0;
}