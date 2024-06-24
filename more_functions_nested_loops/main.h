#ifndef MAIN_H
#define MAIN_H

static inline int _putchar(char c)
{
	return write(1, &c, 1);
}

int _isupper(int c);

int _isdigit(int c);
#endif /* MAIN_H */
