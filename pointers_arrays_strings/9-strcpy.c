#include "main.h"

/**
* _strcpy - Copies the string pointed to by src, including the
*           terminating null byte (\0), to the buffer pointed to by dest.
* @dest: Pointer to the destination buffer where the content is to be copied.
* @src: Pointer to the source string to be copied.
*
* Return: Pointer to the destination string (dest).
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
