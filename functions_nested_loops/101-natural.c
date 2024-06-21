#include <stdio.h>
#include "main.h"

void natural(void)
{
	int result;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			result = result + i;
		}
	}
	printf("%d\n", result);
}
