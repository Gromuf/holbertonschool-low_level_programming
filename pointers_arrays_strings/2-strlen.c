#include "main.h"

/**
* _strlen - Calculates the length of a string.
* @s: Pointer to the string.
*
* Description:
* This function calculates and returns
* the length of the string pointed to by @s,
* excluding the null terminator '\0'.
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
