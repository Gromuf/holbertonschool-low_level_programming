#include "main.h"

char *leet(char *str)
{
	char *x = str;

	while (*x != '\0')
	{
		int i = 0;

		while (i < 5)
		{
			if (*x == 'a' || *x == 'A')
			{
				*x = '4';
				break;
			}
			else if (*x == 'e' || *x == 'E')
			{
				*x = '3';
				break;
			}
			else if (*x == 'o' || *x == 'O')
			{
				*x = '0';
				break;
			}
			else if (*x == 't' || *x == 'T')
			{
				*x = '7';
				break;
			}
			else if (*x == 'l' || *x == 'L')
			{
				*x = '1';
				break;
			}
			i++;
		}
		x++;
	}
	return (str);
}
