#include "main.h"

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
		{
			if (started)
				break;
			sign = -sign;
		}
		else if (*s == '+')
		{
			if (started)
				break;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started)
			break;
		s++;
	}
	return (sign * result);
}
