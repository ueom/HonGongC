//Buy Lotto Simulation

#include <stdio.h>
void print_nums(int * lotto_nums);
void input_nums(int *lotto_nums);

int main(void)
{
	int lotto_nums[6];
	
	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int *lotto_nums)
{
	int i=0;

	while(i<6)
	{
		int j = 0;

		printf("Enter the number: ");
		scanf("%d", &lotto_nums[i]);
		for(j = 0; j < i; j++)
		{
			if(lotto_nums[i] == lotto_nums[j])
			{
				printf("There are same number in lotto!\n");
				printf("Enter the number: ");
				scanf("%d", &lotto_nums[i]);
			}
		}
		i++;
	}
}

void print_nums(int * lotto_nums)
{
	int i;
	printf("Lotto numbers: ");

	for(i = 0; i<6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}

	printf("\n");
}
