#include "main.h"

/**
 * _strspn - Computes the length of the maximum initial segment
 *           of the string pointed to by s which consists only of
 *           characters from the string pointed to by accept.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of characters in the initial segment of s
 *         which consist only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *i;
	char *j;
	size_t result = 0;

	for (i = s ; *i != '\0' ; i++)
	{
		for (j = accept ; *j != '\0' ; j++)
		{
			if (*i == *j)
				break;
		}
		if (*j == '\0')
			break;
		result++;
	}
	return (result);
}
