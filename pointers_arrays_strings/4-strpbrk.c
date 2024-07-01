#include "main.h"

/**
 * _strpbrk - Locate the first occurrence in the string s of any
 *            character in the string accept
 * @s: The string to search
 * @accept: The string containing the characters to match
 *
 * Return: Pointer to the first occurrence in s of any character in accept,
 *         or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *i;
	char *j;

	for (i = s ; *i != '\0' ; i++)
	{
		for (j = accept ; *j != '\0' ; j++)
		{
			if (*i == *j)
				return (i);
		}
	}
	return (NULL);
}
