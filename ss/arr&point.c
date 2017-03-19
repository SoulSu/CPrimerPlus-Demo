#include <stdio.h>

int main(int argc, char const *argv[])
{



	int *a = (int [3]){1,2,3};

	int b[3] = {1,2,3};

	printf("%d\n", sizeof(a)); 
	printf("%d\n", sizeof(b)); 

	/* code */
	return 0;
}