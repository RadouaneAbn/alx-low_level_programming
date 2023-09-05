#include <stdlib.h>
#include "main.h"

/**
 * free_grid - this function frees a 2D grid created by alloc_grid
 * @grid: the grid
 * @height: teh height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
