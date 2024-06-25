#include "main.h"


/**
* _strcmp - Compares two strings.
* @s1: The first string to be compared.
* @s2: The second string to be compared.
*
* Return: An integer less than, equal to, or greater than zero if s1 (or the
*         first n bytes thereof) is found, respectively, to be less than,
*         to match, or be greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
