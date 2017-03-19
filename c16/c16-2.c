#include <stdio.h>


#define p(a) x##a

int main(int argc, char const *argv[])
{
	int x3 = 1;
	printf("%d\n", p(3));
	return 0;
}