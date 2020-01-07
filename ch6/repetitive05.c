//Practical use of repetitive statement
//Overlaped repetitive statements

#include <stdio.h>

int main(void)
{
	int i, j;

	for(i = 0; i<3; i++)
	{
		for ( j = 0; j<5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
