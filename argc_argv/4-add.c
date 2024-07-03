#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		char *endptr;
		long num = strtol(argv[i], &endptr, 10);
		
		if (*endptr != '\0' || num < 0 || num > INT_MAX)
		{
			printf("Error\n");
			return (1);
		}
		result += (int)num;
	}
	printf("%d\n", result);
	return (0);
}
