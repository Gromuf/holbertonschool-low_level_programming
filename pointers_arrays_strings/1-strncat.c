#include "main.h"

/**
* _strncat - Concatenates at most n bytes of the src string to the dest string,
*            overwriting the terminating null byte (\0) at the end of dest,
*            and then adds a terminating null byte.
* @dest: Pointer to the destination buffer which should contain a string.
* @src: Pointer to the source string to be appended to dest.
* @n: Maximum number of bytes to be used from src.
*
* Return: Pointer to the resulting string dest.
*/
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
