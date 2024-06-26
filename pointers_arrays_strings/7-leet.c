#include "main.h"


/**
* leet - Encodes a string into 1337 (leet speak).
* @str: Pointer to the string to be encoded.
*
* Return: Pointer to the modified string.
*/
char *leet(char *str)
{
	char *x = str;
	char map[256] = {0};

	map['a'] = '4';
	map['A'] = '4';
	map['e'] = '3';
	map['E'] = '3';
	map['o'] = '0';
	map['O'] = '0';
	map['t'] = '7';
	map['T'] = '7';
	map['l'] = '1';
	map['L'] = '1';

	while (*x != '\0')
	{
		if (map[(unsigned char)*x] != 0)
			*x = map[(unsigned char)*x];
		x++;
	}
	return (str);
}
