#include <stdio.h>

int main(void)
{
	int num = 612852475143;
	int res = -1;
	int i;

	while (num % 2 == 0)
	{
		res = 2;
		num /= 2;
	}
	while (num % 3 == 0)
	{
		res = 3;
		num = n / 3;
	}
	for (i = 5 ; i * i <= num ; i += 6)
	{
		while (num % i == 0)
		{
			res = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			res = i + 2;
			n = n / (i + 2);
		}
	}
	if (num > 4)
		res = num;
	printf("%d\n", num);
	return (0);
}
