#include "main.h"

int _strlen(char *s)
{
	int result;

	while (*s != '\0')
	{
		result++;
		*s++;
	}
	return (result);
}
