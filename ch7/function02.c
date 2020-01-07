//Centi to Meter

#include <stdio.h>

double centi_to_meter(double);

int main(void)
{
	double res;
	res = centi_to_meter(1871);
	printf("%.2lfm\n", res);
	
	return 0;
}

double centi_to_meter(double a)
{
	double m;
	m = a * 1E-02;
	return m;
}
