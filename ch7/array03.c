//Array and Repetetive Statement
//Get array's size. use sizeof()

#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	int count = sizeof(score)/sizeof(score[0]);

	for (i = 0; i <count; i++)
	{
		scanf("%d", &score[i]);	
	}
	
	for(i =0 ; i<count; i++)
	{
		total += score[i];
	}
	avg = total/(double)count;	//type conversion

	for(i =0; i< count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("Averge : %.1lf\n", avg);
	
	return 0;
}
