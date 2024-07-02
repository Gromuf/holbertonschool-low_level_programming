#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the arguments passed to the program.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
