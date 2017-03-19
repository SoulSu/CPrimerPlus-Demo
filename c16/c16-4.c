#include <stdio.h>



#define SYMBOL first

#ifndef SYMBOL
#define SYMBOL value
#endif



int main(int argc, char const *argv[])
{
	char *first = "first";
	char *value = "value";
	
	printf("%s\n", SYMBOL);

	return 0;
}