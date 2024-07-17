#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments.
 *
 * This function takes a variable number of arguments and returns their sum.
 * It uses the stdarg.h macros to handle the variable arguments.
 *
 * Return: The sum of all parameters. If n is 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int res = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(nums, int);
	}

	va_end(nums);

	return (res);
}
