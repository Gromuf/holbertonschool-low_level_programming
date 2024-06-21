#include <stdio.h>
#include "main.h"

int main(void)
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
	return (0);
}
