//Save string 

#include <stdio.h>

int main(void)
{
	char str[80] = "applejam";
	
	printf("Initial string : %s\n", str);
	printf("Enter new string: ");
	scanf("%s", str);
	printf("Changed string : %s\n", str);

	return 0;
}
