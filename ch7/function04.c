//the function (void) : None parameter
//Exception handling (Don't enter Negative number)

#include <stdio.h>
int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("Return value is : %d\n", result);
	return 0;
}

int get_num(void)
{
	int num;

	printf("Enter the positive integer: ");
	scanf("%d", &num);
	while (num<0)
	{
		printf("Entet the POSITIVE NUMBER!\n");
		printf("Enter the positive integer: ");
		scanf("%d", &num);
	}

	return num;

}
