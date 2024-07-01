#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Destination where content is to be copied.
 * @src: Source of data to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
