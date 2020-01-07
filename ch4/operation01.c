#include<stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a+b;
	sub = a-b;
	mul = a*b;
	inv = -a;

	printf("a is %d, b is %d.", a, b);
	printf("Addition: %d\n", sum);
	printf("Subtraction: %d\n", sub);
	printf("Multiplication: %d\n", mul);
	printf("Minus a : %d\n", inv);

	return 0;

}
