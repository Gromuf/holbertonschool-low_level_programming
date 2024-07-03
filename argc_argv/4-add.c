#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - Sums up positive numbers provided as command line arguments.
 * @argc: The number of command line arguments.
 * @argv: An array of strings representing the command line arguments.
 *
 * Return: 0 on success, 1 if any argument is invalid.
 */
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
