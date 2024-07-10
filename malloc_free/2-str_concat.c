#include "main.h"
#include <stdlib.h>

/**
  * _strlen - Calculates the length of a string.
  * @s: Pointer to the string.
  *
  * Return: The length of the string pointed to by @s.
  */
int _strlen(char *s)
{
	int result = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	int length1 = _strlen(s1);
	int length2 = _strlen(s2);
	char *res = (char *)malloc(sizeof(char) * (length1 + length2 + 1));

	if (res == NULL)
		return (NULL);
	char *start = res;

	while (*s1 != '\0')
	{
		*res = *s1;
		res++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*res = *s2;
		res++;
		s2++;
	}
	*res = '\0';
	return (start);
}
