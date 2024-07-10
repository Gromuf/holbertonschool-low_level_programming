#include "main.h"
#include <stdlib.h>

/**
* _strdup - Duplicates a string in memory.
* @str: The string to duplicate.
*
* Return: Pointer to the newly allocated duplicated string,
*         or NULL if str is NULL or if memory allocation fails.
*/
char *_strdup(char *str)
{
	char *res;
	int i;
	int length = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
	{
		length++;
	}
	res = malloc(sizeof(char) * (length + 1));
	if (res == NULL)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
	{
		res[i] = str[i];
	}
	res[length] = '\0';
	return (res);
}
