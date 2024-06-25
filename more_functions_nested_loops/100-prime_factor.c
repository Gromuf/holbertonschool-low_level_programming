#include <stdio.h>

int main(void)
{
	long num = 612852475143;
	long res = -1;
	long i;

	while (num % 2 == 0)
	{
		res = 2;
		num /= 2;
	}
	while (num % 3 == 0)
	{
		res = 3;
		num = num / 3;
	}
	for (i = 5 ; i * i <= num ; i += 6)
	{
		while (num % i == 0)
		{
			res = i;
			num = num / i;
		}
		while (num % (i + 2) == 0)
		{
			res = i + 2;
			num = num / (i + 2);
		}
	}
	if (num > 4)
		res = num;
	printf("%ld\n", num);
	return (0);
}
