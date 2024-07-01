#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: The pointer to the memory area to be filled.
 * @b: The byte to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area `s`.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n <= 0)
		return (s);
	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
