// Compare Sizeof(short) n Sizeof(long)

#include <stdio.h>

int main(void)
{
	int res;
	res = (sizeof(short) > sizeof(long));
	printf("%s\n", ((res==1)? "short":"long"));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));	
	return 0;
}
