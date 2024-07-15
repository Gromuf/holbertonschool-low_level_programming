#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each array element.
 *
 * This function iterates over each element of the array pointed to by @array,
 * applying the function pointed to by @action to each element.
 * If @array or @action is NULL, the function returns immediately.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
