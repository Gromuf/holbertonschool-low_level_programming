#include "main.h"

char *rot13(char *str)
{
	char *x = str;

	while (*x)
	{
		if (('a' <= *x && *x <= 'z') || ('A' <= *x && *x <= 'Z'))
		{
			char base = ('a' <= *x && *x <= 'z') ? 'a' : 'A';
			*x = (*x - base + 13) % 26 + base;
		}
		x++;
	}
	return (str);
}
