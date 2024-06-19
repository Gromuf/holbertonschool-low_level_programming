#include "main.h"
#include <stdio.h>

int print_sign(int i)
{
	if (i < 0)
	{
		write(1, "+", 1);
		return (1);
	}
	else if (i == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else
	{
		write(1, "-", 1);
		return (-1);
	}
}
