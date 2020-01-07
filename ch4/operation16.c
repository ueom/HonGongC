//Rate of audience

#include<stdio.h>

int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate;
	
	rate = audience/(double)seats * 100;
	printf("%.1lf%%",rate);

	return 0;
}
