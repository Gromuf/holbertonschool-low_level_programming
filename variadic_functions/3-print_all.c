#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void printChar(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

void printInt(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

void printFloat(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

void printString(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;

	printall_t prt[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString}};

	va_start(args, format);
	while (format && (*format + i))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(prt[j].letter)))
			j++;
		if (j < 4)
			prt[j].func(args);
		i++;
	}
}
