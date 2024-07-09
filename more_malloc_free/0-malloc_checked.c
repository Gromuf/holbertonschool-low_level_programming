#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Description: This function allocates memory of size `b` using the `malloc`
 * function. If the allocation fails, the process will terminate with a status
 * value of 98.
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *res = malloc(b);

	if (res == NULL)
		exit(98);
	return (res);
}
