#include "main.h"

/**
* alloc_grid - Allocates a two-dimensional grid of integers.
* @width: The width of the grid.
* @height: The height of the grid.
*
* Return: Pointer to the allocated grid, or NULL if width or height is
*	<= 0 or if malloc fails.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			/* Free previously allocated memory */
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
