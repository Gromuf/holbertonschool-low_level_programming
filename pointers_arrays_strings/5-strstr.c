#include "main.h"

/**
 * _strstr - Locate the first occurrence of a substring in a string
 * @haystack: The string to search within
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*j != '\0' && *i == *j)
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
