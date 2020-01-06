#include <stdio.h>

int main(void)
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("Short Type : %d\n", sh);
	printf("INT Type: %d\n", in);
	printf("Long Type: %ld\n", ln);
	printf("Long Long Type: %lld\n", lln);

	return 0;
}
