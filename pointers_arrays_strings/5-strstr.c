#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	if (needle == '\0')
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
