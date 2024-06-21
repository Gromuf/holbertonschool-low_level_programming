#include <stdio.h>

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long result;
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
