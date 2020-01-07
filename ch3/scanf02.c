#include <stdio.h>

int main(void)
{
	int age;
	double height;

	printf("The Age n Height: ");
	scanf("%d%lf", &age, &height);
	printf("Age is %d and Height is %lf\n", age, height);

	return 0;
}
