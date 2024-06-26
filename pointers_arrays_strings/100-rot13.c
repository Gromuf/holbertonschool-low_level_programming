#include "main.h"

char *rot13(char *str)
{
	char *x = str;

	while (*x)
	{
		if (('a' <= *x && *x <= 'z') || ('A' <= *x && *x <= 'Z'))
		{
			char base = 'A';

			while ('a' <= *x && *x <= 'z')
			{
				base = 'a';
				break;
			}
			*x = (*x - base + 13) % 26 + base;
		}
		x++;
	}
	return (str);
}
