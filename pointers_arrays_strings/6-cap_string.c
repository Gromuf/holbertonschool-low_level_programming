#include "main.h"

/**
* cap_string - Capitalizes all words in a string based on specified separators.
* @str: Pointer to the string to be capitalized.
*
* Return: Pointer to the modified string.
*/
char *cap_string(char *str)
{
	int i = 0;
	int upNext = 1;

	while (str[i] != 0)
	{
		if (upNext && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			upNext = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
			upNext = 1;
		else
			upNext = 0;
		i++;
	}
	return (str);
}
