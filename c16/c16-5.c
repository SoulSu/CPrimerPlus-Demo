#include <stdio.h>


int main(int argc, char const *argv[])
{
	printf("__FILE__ %s\n", __FILE__);
	printf("__DATE__ %s\n", __DATE__);
	printf("__LINE__ %ld\n", __LINE__);
	printf("__TIME__ %s\n", __TIME__);
	printf("__func__ %s\n", __func__);
	return 0;
}