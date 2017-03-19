#include <stdio.h>


enum BIT{
	APPLE=1,
	PEAR=2,
	ORANGE=4,
};

// 位运算
int main(int argc, char const *argv[])
{
	enum BIT b;

	int i = 1;

	printf("%d\n", i);
	printf("%d\n", sizeof(APPLE));
	printf("%d\n", PEAR);


	return 0;
}