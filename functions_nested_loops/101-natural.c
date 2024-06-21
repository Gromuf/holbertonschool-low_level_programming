#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Computes the sum of all multiples of 3 or 5 below 1024
 * and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			result = result + i;
		}
	}
	printf("%d\n", result);
	return (0);
}
