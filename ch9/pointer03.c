//Usage of pointer

#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;
	double avg;
	int * pa, * pb;
	int * pt = &total;
	double * pg = &avg;

	pa = &a;
	pb = &b;
	
	*pt = *pa + *pb;
	*pg = *pt/2.0;

	printf("Values of two integer : %d, %d\n", *pa, *pb);
	printf("Sum of two integer : %d\n", *pt);
	printf("Average of two integer : %1.lf\n", *pg);

	return 0;
	
}
