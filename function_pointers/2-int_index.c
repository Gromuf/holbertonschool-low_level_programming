#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function
 * that returns non-zero if a match is found.
 *
 * This function searches for an integer in the array pointed to by @array.
 * It iterates through the array and applies
 * the comparison function @cmp to each element.
 * If @array is NULL, @size is less than or equal to 0,
 * or @cmp is NULL, the function returns -1.
 * Returns: The index of the first element
 * for which @cmp function does not return 0,
 * or -1 if no such element is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (size > 0)
	{
		if (cmp(*array))
			return (index);
		array++;
		size--;
		index++;
	}
	return (-1);
}
