#include "main.h"

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	for (i = 0n j = n - 1 ; i < j ; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
