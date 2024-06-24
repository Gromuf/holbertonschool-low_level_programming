#include "main.h"

/**
* rev_string - Reverses a string in place.
* @s: Pointer to the null-terminated string to be reversed.
*
* Description:
* This function reverses the string pointed to by @s in place, meaning that the
* characters of the string are rearranged
* in reverse order within the same memory
* space.
*/
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; i < length / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
