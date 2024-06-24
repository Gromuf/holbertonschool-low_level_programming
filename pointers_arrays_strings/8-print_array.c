#include "main.h"
#include <stdio.h>

/**
* print_array - Prints n elements of an array of integers.
* @a: Pointer to the array of integers.
* @n: Number of elements to print.
*
* Description:
* This function prints n elements of the array pointed to by @a.
* Each number is followed by a comma and a space, except the last number,
* which is followed by a newline.
*/
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < n - 1 ; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
