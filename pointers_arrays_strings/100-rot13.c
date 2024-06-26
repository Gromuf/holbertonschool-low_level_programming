#include "main.h"

char *rot13(char *str)
{
	char *x = str;

	while (*x)
	{
		if (('a' <= *x && *x <= 'm') || ('A' <= *x && *x <= 'M'))
			*x += 13;
		else
			*x -= 13;
		x++;
	}
	return (str);
}
