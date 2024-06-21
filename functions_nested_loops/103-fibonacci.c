#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Computes the sum of the even-valued terms in the Fibonacci
 * sequence whose values do not exceed 4,000,000 and prints the result.
 *
 * Return: Always 0 (Success)
 */
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
