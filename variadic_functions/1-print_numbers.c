#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	if (*separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d%c", va_arg(nums, int), separator);
		}
	}
}