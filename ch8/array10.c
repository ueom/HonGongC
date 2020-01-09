//Change Capital letter to Small letter

#include <stdio.h>

int main(void)
{
	char str[50];
	int i, changed = 0;
	
	printf("Enter the sentence: ");
	gets(str);
	for(i = 0; i<50; i++)
	{
		if((str[i]>='A') &&(str[i]<='Z'))
		{
			str[i] += 32;
			changed += 1;
			printf("%c", str[i]);	
		}
	}
	puts(str);
	printf("Changed letter #: %d\n", changed);

	return 0;
}
