#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

static inline int _putchar(char c)
{
	return write(1, &c, 1);
}

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

#endif /*NAIN_H*/
