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

	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}

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

/**
* _strdup - Duplicates a string in memory.
* @str: The string to duplicate.
*
* Return: Pointer to the newly allocated duplicated string,
*         or NULL if str is NULL or if memory allocation fails.
*/
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int length = _strlen(str);
	char *res = malloc(sizeof(char) * (length + 1));
	if (res == NULL)
		return (NULL);
	_strcpy(res, str);
	return (res);
}
