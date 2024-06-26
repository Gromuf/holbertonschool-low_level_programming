#include "main.h"

char *rot13(char *str)
{
	char *x = str;

	while (*x)
	{
		if (('a' <= *x && *x <= 'm') || ('A' <= *x && *x <= 'M'))
			*x += 13;
		while (('n' <= *x && *x <= 'z') || ('N' <= *x && *x <= 'Z'))
		{
			*x -= 13;
			break;
		}
		x++;
	}
	return (str);
}
