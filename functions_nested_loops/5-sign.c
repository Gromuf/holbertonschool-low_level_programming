#include "main.h"

int print_sign(int i)
{
	if (i < 0)
	{
		printf("+");
		return (1);
	}
	else if (i == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
