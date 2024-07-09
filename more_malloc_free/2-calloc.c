#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array,
 * using malloc, and initializes it to zero
 * @nmemb: The number of elements
 * @size: The size of each element
 *
 * Description: This function allocates
 * memory for an array of `nmemb` elements,
 * each of size `size` bytes, using the `malloc` function.
 * The allocated memory is
 * initialized to zero. If `nmemb` or `size` is 0,
 * or if `malloc` fails, the function
 * returns NULL.
 *
 * Return: A pointer to the allocated memory, or NULL if the allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *res;
	char *tab;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(size * nmemb);
	if (res == NULL)
		return (NULL);
	tab = res;
	for (i = 0 ; i < (size * nmemb) ; i++)
	{
		tab[i] = '\0';
	}
	return (res);
}
