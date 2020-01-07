// front or back ++, --

#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	printf("Initial value a is %d, b is %d\n", a, b);
	
	pre = (++a)*3;
	post = (b++)*3;

	printf("Preposition (++a) * 3 = %d, Retroposition (b++) * 3 = %d.\n", pre, post);

	return 0;
}
