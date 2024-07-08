#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory allocated for a 2D grid.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * This function frees the memory allocated by alloc_grid for the 2D grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
