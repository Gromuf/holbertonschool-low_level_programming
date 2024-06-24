#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

static inline int _putchar(char c)
{
	return write(1, &c, 1);
}

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

#endif /* MAIN_H */
