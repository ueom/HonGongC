//change string's location
//cross two word

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	char temp[80];

	printf("Enter two string: ");
	scanf("%s %s", str1, str2);
	printf("Origin String is: %s, %s\n", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, str1);
	printf("Changed string: %s, %s\n", str1, str2);

	return 0;
}
