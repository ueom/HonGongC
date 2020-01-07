// Result of operation

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, result;
	
	a+b;
	printf("%d + %d = %d\n", a, b, a+b);

	result = a+b;
	printf("%d + %d = %d\n", a, b, result);
	
	return 0;
}
