#include "main.h"

/**
* _strcat - Concatenates the src string to the dest string,
*           overwriting the terminating null byte (\0) at the end of dest,
*           and then adds a terminating null byte.
* @dest: Pointer to the destination buffer which should contain a string.
* @src: Pointer to the source string to be appended to dest.
*
* Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
