//Integer caculator
//(a/b) is also int

#include <stdio.h>

int main(void)
{
	int a =0, b =0;
	char operator = '+';

	printf("Enter the integer equation: ");
	scanf("%d%c%d", &a, operator, &b);

	switch(operator)
	{
	case('+'):
		printf("%d + %d = %d", a, b, (a+b));
		break;
	case('-'):
		printf("%d - %d = %d", a, b, (a-b));
		break;
	case('*'):
		printf("%d * %d = %d", a, b, (a*b));
		break;
	defalut:
		printf("%d / %d = %d", a, b, (a/b));
		break;
	}
}

