//sum 1 from num

#include <stdio.h>
void sum(int n);

int main(void)
{
	sum(10);
	sum(100);
	return 0;
}

void sum(int n)
{
	int i = 0;
	int add = 0;

	for(i = 1; i<=n; i++)
	{
		add +=i;	
	}
	printf("Sum from 1 to %d is: %d\n", n, add);
	
}

