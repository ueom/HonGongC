//Use of break
// sum of num >30 ? break

#include <stdio.h>

int main(void)
{
	int i;
	int sum =0;
	
	for(i = 1; i <=10; i++)
	{
		sum += i;
		if( sum > 30) break;
	}
	printf("Cummulation of values is %d\n", sum);
	printf("the last plus value is %d\n", i);

	return 0;
}
