#include <stdio.h>

int main(void)
{
	long a = 1;
	long b = 2;
	long result;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 3 ; i <= 50 ; i++)
	{
		result = a + b;
		printf("%ld, ", result);
		a = b;
		b = result;
	}
	printf("%ld\n", a + b);
	return (0);
}
