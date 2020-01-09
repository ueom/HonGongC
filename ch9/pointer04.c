//use const in front of pointer

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int *pa = &a;
	
	printf("Parameter A's value is: %d\n", *pa);
	pa = &b;
	printf("Parameter B's value is: %d\n", *pa);
	pa = &a;
	a = 20;
	printf("Parameter A's value is: %d\n", *pa);

	return 0;
}
