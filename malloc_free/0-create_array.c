#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of chars, and initializes
*                it with a specific char.
* @size: The size of the array to be initialized.
* @c: The specific char to initialize the array with.
*
* Return: If size == 0 or the function fails - NULL.
*         Otherwise - a pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *res;

	if (size == 0)
		return (NULL);
	res = (char *)malloc(sizeof(char) * size);
	for (i = 0 ; i < size ; i++)
	{
		res[i] = c;
	}
	return (res);
}
