#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	char *i;
	char *j;

	for (i = s ; *i != '\0' ; i++)
	{
		for (j = accept ; *j != '\0' ; j++)
		{
			if (*i == *j)
				return (i);
		}
	}
	return (NULL);
}
