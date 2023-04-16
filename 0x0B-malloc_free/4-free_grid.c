#include "main.h"
#include <stdlib.h>
/**
 * free_grid-function that frees a 2 dimensional grid
 * Return:void
 * @height:rows
 * @grid:2d array
 */
	void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
