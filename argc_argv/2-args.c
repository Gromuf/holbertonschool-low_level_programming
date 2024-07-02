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
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
