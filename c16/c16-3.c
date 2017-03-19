#include <stdio.h>


// 替换成了字符串
#define P(x) #x

int main(int argc, char const *argv[])
{
	
	printf("%s\n", P(123333333));

	return 0;
}