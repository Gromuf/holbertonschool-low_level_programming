#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value in the range (inclusive)
 * @max: The maximum value in the range (inclusive)
 *
 * Description: This function allocates
 * memory for an array of integers containing
 * all the values from `min` to `max`,
 * inclusive. If `min` is greater than `max`,
 * the function returns NULL.
 * The array is dynamically allocated using `malloc`.
 *
 * Return: A pointer to the newly allocated array,
 * or NULL if `min` is greater than `max`
 * or if the memory allocation fails.
 */
int *array_range(int min, int max)
{
	int length = max - min + 1;
	int *res;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);
	res = malloc(sizeof(int) * length);
	for (i = min ; i <= max ; i++)
	{
		res[j] = i;
		j++;
	}
	return (res);
}
