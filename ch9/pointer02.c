//Declation of pointer use *

#include <stdio.h>

int main(void)
{
	int a;
	int *pa;

	pa = &a;
	*pa = 10;

	printf("Print a by pointer: %d\n", *pa);
	printf("Print a by value: %d\n", a);

	return 0;
}
