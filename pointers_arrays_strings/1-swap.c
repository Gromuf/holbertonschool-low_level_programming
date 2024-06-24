#include "main.h"

/**
* swap_int - Swaps the integer values pointed to by two pointers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* This function swaps the integer values stored at the memory locations
* pointed to by @a and @b.
*/
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
