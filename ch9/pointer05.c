//sizeof Address n Pointer

#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char *pc = &ch;
	int *pi = &in;
	double *pd = &db;

	printf("Size of char: %d\n", sizeof(&ch));
	printf("Size of int: %d\n", sizeof(&in));
	printf("Size of double: %d\n", sizeof(&db));
	printf("Size of *char: %d\n", sizeof(pc));
	printf("Size of *int: %d\n", sizeof(pi));
	printf("Size of *double: %d\n", sizeof(pd));

	printf("pc->ch : %d\n", sizeof(*pc));
	printf("pi->int : %d\n", sizeof(*pi));
	printf("pd->double : %d\n", sizeof(*pd));

	return 0;
}
