#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, using at most n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to include from s2.
 *
 * Return: A pointer to the newly allocated space in memory containing the concatenated string.
 *         If malloc fails, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i;
	unsigned int j;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int length;

	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	if (n > length2)
	{
		n = length2;
	}
	length = length1 + n;
	res = malloc(sizeof(char) * (length + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < length1 ; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		res[i + j] = s2[j];
	}
	res[i + j] = '\0';
	return (res);
}
