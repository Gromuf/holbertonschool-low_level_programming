#include "main.h"

char *rot13(char *str)
{
	char *x = str;

	while (*x)
	{
		if (('a' <= *x && *x <= 'z') || ('A' <= *x && *x <= 'Z'))
		{
			int is_lower = 'a' <= *x && *x <= 'z';
			int is_upper = 'A' <= *x && *x <= 'Z';

			while (is_lower)
			{
				*x = (*x - 'a' + 13) % 26 + 'a';
				break;
			}

			while (is_upper)
			{
				*x = (*x - 'A' + 13) % 26 + 'A';
				break;
			}
		}
		x++;
	}
	return (str);
}
