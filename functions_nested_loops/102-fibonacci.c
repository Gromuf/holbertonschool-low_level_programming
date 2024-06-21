#include <stdio.h>

int main(void)
{
	double a = 1;
	double b = 2;
	double result;
	int i;

	printf("%f, %f, ", a, b);
	for (i = 0 ; i < 49 ; i++)
	{
		result = a + b;
		printf("%f, ", result);
		a = b;
		b = result;
	}
	printf("%f\n", a + b);
	return (0);
}
