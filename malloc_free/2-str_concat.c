#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i;
	int res_i;
	int length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s1 != '\0')
	{
		length++;
		s1++;
	}
	while (*s2 != '\0')
	{
		length++;
		s2++;
	}
	res = malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	for (i = 0 ; s1[i] ; i++)
	{
		res[res_i++] = s1[i];
	}
	for (i = 0 ; s2[i] ; i++)
	{
		res[res_i++] = s2[i];
	}
	return (res);
}
