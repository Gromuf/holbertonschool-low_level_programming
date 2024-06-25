#include "main.h"

/**
* _strncpy - Copies up to n characters from the src string to the dest string.
*            If the length of src is less than n, the remainder of dest will
*            be padded with null bytes (\0). If the length of src is greater
*            than or equal to n, the string pointed to by dest will not be
*            null-terminated.
* @dest: Pointer to the destination buffer.
* @src: Pointer to the source string.
* @n: Maximum number of characters to be copied from src.
*
* Return: Pointer to the destination string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
