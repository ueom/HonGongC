//Basic recursive call function
//repeat 3 times
//Difference with Repititive Statement

#include <stdio.h>
void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if(count == 3) return;
	fruit(count + 1);
	printf("jam\n");
}
