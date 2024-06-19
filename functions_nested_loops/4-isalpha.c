#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @i: The character to be checked
 *
 * Description: This function returns 1 if the character is a letter,
 * either lowercase or uppercase, and 0 otherwise.
 *
 * Return: 1 if the character is a letter, 0 otherwise
 */
int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
