#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for
 * a previously created alloc_grid()
 * @grid: grid whose allocated space is to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
