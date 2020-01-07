//BMI = (weight)/(height^2)

#include <stdio.h>

int main(void)
{
	double weight=0, height =0;
	double bmi=0;

	printf("Enter your Weight(kg) and Height(cm): ");
	scanf("%lf%lf",&weight, &height);

	height = height*1E-02;
	bmi = weight/(height*height);
	printf(((bmi >= 20.0) && (bmi < 25.0)) ? "Standard Weight":"Manage your Weight needed");

	return 0;
}
