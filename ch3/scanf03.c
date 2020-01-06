#include<stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("Enter the grade: ");
	scanf("%c", &grade);
	printf("Enter your name: ");
	scanf("%s", name);
	printf("%s's grade is %c.\n", name, grade);

	return 0;
}
