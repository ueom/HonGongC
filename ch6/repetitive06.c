//(2~9)multiplication table

#include <stdio.h>

int main(void)
{
	int i, j;
	for (i=2 ; i < 10; i++)
	{
		printf("----------%d times table---------\n", i);
		for( j = 1; j <10; j++)
		{
			printf("%d * %d = %d\n", i, j, (i*j));
		}
	}
	return 0;
}
