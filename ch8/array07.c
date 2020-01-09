#define _CRT_SECURE_NO_WARNINGS
//Usage of gets() & puts()
//Can input a holl sentence

#include <stdio.h>

int main(void)
{
	char str[80];

	printf("Enter the sentence: ");
	gets(str);
	puts("Entered sentence is: ");
	puts(str);

	return 0;
}
