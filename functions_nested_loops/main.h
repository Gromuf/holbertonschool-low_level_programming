#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - Prints a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
static inline int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * x - Prints "_putchar" followed by a new line
 *
 * Description: This function prints the string "_putchar"
 * followed by a new line character to the standard output.
 */
void x(void);

void print_alphabet(void);

void print_alphabet_x10(void);
#endif /* MAIN_H */
