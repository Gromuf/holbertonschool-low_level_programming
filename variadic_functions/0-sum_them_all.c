#include "variadic_functions.h"

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