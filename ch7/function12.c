//Recursive Function
//Sum 1 to n

#include <stdio.h>
int rec_func(int n);

int main(void)
{
	printf("%d\n", rec_func(10));
	return 0;
}

int rec_func(int n)
{
	int sum = n;
	if(n==1) return 1;

	sum += rec_func(n-1);
	return sum;

}
