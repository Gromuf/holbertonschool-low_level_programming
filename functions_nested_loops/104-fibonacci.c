#include <stdio.h>

int main(void)
{
	unsigned long a1 = 1, a2 = 0;
	unsigned long b1 = 2, b2 = 0;
	unsigned long temp1, temp2;
	unsigned long max = 1000000000;
	int i;

	printf("%lu, %lu", a1, b1);
	for (i = 3 ; i <= 98 ; i++)
	{
		temp1 = a1 + b1;
		temp2 = a2 + b2;

		if (temp2 >= max)
		{
			temp1 += temp2 / max;
			temp2 = temp2 % max;
		}

		printf(", %lu", temp1);
		if (temp2 > 0 || i <  98)
		{
			printf("%09lu", temp2);
		}
		a1 = b1;
		a2 = b2;
		b1 = temp1;
		b2 = temp2;
	}
	printf("\n");
	return (0);
}
