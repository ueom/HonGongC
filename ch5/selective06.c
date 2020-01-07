//needed a brace{}
//Dangling else Problem Get off // in #11, #16

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	
	if(a<0)
//	{
		if(b>0)
		{
			printf("OK\n");
		}	
//	}
	else
	{
		printf("ok");
	}

	return 0;
}
