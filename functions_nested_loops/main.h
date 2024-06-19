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

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);
#endif /* MAIN_H */
