//Find prime number

#include <stdio.h>

int main(void)
{
	int num;
	int i, j;
	int isprime;

	printf("Enter the integer over 2: ");
	scanf("%d",&num);

	for(i = 2; i<num+1; i++)
	{
		isprime = 1;

		for( j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				isprime = 0;
				break;
			}
		}
		if( isprime ==1)
			printf("%d ",i);
	}
	
	return 0;
}
