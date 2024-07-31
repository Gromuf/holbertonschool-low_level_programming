#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int m = 1;
	int length = 0;

	if (b == NULL)
		return (0);

	while (b[length])
		length++;

	for (length -= 1; length >= 0 ; length--)
	{
		if (b[length] != 0 && b[length] != '1')
			return (0);

		result += (b[length] - '0') * m;
		m *= 2;
	}
	return (result);
}
