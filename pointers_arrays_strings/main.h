#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

static inline int _putchar(char c)
{
	return write(1, &c, 1);
}

void reset_to_98(int *n);

#endif /*NAIN_H*/
