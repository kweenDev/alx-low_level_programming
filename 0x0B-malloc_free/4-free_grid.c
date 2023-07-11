#include <stdlib.h>
#include "main.h"

/**
* free_grid - Frees a two-dimensional grid of integers
* @grid: The grid to free
* @height: The height of the grid
*/
void free_grid(int **grid, int height)
{
	int grid;
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
