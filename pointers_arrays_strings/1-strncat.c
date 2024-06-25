#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int i = 0;

	while (*dest)
		dest++;
	while (i < n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (start);
}
