#include <stdio.h>

int main(void)
{
	long a = 1;
	long b = 2;
	long result;
	int i;

	printf("%lu, %lu", a, b);
	for (i = 3 ; i <= 98 ; i++)
	{
		result = a + b;
		printf(", %lu", result);
		a = b;
		b = result;
	}
	printf("\n");
	return (0);
}
