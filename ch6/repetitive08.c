//Use of for repetitive statements
//How many times of "Be happy~~!" is printed

#include <stdio.h>

int main(void)
{
	int i, j ;
	for ( i = 0; i < 3; i++)
	{
		for( j = 0; j<4; j++)
		{
			printf("Be Happy!\n");
		}
	}

	i =0;
	j = 0;

	for( i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Be happy~\n");
			if ( j ==2) break;
		}
	}
}
