#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific message to standard error using the write
 * system call and returns 1.
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, 59);
	return (1);
}