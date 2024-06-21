#include <stdio.h>

int main(void)
{
	long a = 1;
	long b = 2;
	long result;
	long sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		result = a + b;
		a = b;
		b = result;
	}
	printf("%ld\n", sum);
	return (0);
}
