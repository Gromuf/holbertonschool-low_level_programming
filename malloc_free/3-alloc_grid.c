#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers
 * and initializes to 0.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: Pointer to the allocated 2D array (grid),
 * or NULL if allocation fails
 *         or if width or height is 0.
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	res = (int **)malloc(height * sizeof(int *));
	if (res == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		res[i] = (int *)malloc(width * sizeof(int));
		if (res[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
			{
				free(res[j]);
			}
			free(res);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			res[i][j] = 0;
		}
	}
	return (res);
}
