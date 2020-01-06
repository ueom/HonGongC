#include <stdio.h>

int main(void)
{
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("Value a is: %d\n", a);
	printf("Value b is: %d\n", b);
	printf("Value c is: %d\n", c);
	printf("Value da is: %.1lf\n", da);
	printf("Value d is: %c\n", ch);

	return 0;
}
