#include "main.h"

/**
* _strlen - Calculates the length of a null-terminated string.
* @str: Pointer to the null-terminated string.
*
* Description:
* This function calculates and returns the length of the string pointed to by @str,
* excluding the null terminator '\0'.
*
* Return: The length of the string pointed to by @str.
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
