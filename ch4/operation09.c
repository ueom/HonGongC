//Usage of sizeof()

#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("Size of int is: %d\n", sizeof(a));
	printf("Size of double is: %d\n", sizeof(b));
	printf("Size of constant integer is: %d\n", sizeof(10));
	printf("Size of result is: %d\n", sizeof(1.5+3.4));
	printf("Size of character is: %d\n", sizeof(char));

	return 0;
}
