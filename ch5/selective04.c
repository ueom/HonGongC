//Basic Selective Statement (if-else)
// height >187,5 and weight <80.0 is OK

#include <stdio.h>

int main(void)
{
	double height = 179.5;
	double weight = 75.0;
	
	if((height >=187.5)&&(weight <80.0))
	{
		printf("OK\n");
	}
	else
	{
		printf("cancel\n");
	}
	
	return 0;
}

