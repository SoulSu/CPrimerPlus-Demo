#include <stdio.h>


int main()
{
	int yuanshi[] = {1,2,3,4,5}; 
	int (*szzz)[5] = &yuanshi;
	int *t1 = yuanshi;
	// 

	printf("t1 %p, ys %p\n", t1, yuanshi);

	//  int a[] ,*a
	int a = 1,b = 2,c = 3,d = 4,e = 5;

	int *zzsz[5] = {&a,&b,&c,&d,&e};
	printf("int sizeof %d\n", sizeof(int));
	printf("sizeof szzz %d %p %d %d\n", sizeof(szzz) , szzz, *(szzz[0]), *(szzz[0]+1));

	return 0;	
}