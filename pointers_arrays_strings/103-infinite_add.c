#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* infinite_add - Adds two numbers represented as strings.
* @n1: The first number as a string.
* @n2: The second number as a string.
* @r: The buffer to store the result.
* @size_r: The size of the buffer.
* Return: A pointer to the result, or 0 if the result cannot be stored in r.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int length1 = strlen(n1);
	int length2 = strlen(n2);
	int carry = 0;
	int i = length1 - 1;
	int j = length2 - 1;
	int k = 0;
	int max_length = length1 > length2 ? length1 : length2;

	if (size_r <= max_length + 1)
		return (0);
	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		if (k >= size_r - 1)
			return (0);
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
		k++;
	}
	r[k] = '\0';
	for (i = 0, j = k - 1 ; i < j ; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
