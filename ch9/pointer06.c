//If return type isn't same with pointer's value

#include <stdio.h>

int main(void)
{
	int a = 10;
	int *p = &a;
	double *pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;
}
