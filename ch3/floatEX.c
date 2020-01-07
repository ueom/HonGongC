#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;
	double db = 1.23456789012356789;
	
	printf("Float is: %.20f\n", ft);
	printf("Double is: %.20lf\n", db);

	return 0;
}
