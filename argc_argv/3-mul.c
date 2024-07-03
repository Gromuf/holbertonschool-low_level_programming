#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers provided as command line arguments.
 * @argc: The number of command line arguments.
 * @argv: An array of strings representing the command line arguments.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
