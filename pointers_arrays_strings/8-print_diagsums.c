#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sums of the diagonals of a square matrix
 * @a: Pointer to the 1D array representing the square matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int res1 = 0;
	int res2 = 0;

	for (i = 0; i < size ; i++)
	{
		res1 += a[i * size + i];
		res2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", res1, res2);
}
