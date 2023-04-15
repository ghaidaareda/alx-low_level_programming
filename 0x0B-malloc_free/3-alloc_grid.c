#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-function that returns a pointer to a 2D array of integers
 * Return:Null or 2D
 * @width:width
 * @height:height
 */
	int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
	grid[i] = malloc(height * sizeof(int));
	if (grid[i] == NULL)
	{
		for (j = 0; j < i ; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	}
	for (i = 0; i < width; i++)
		{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
		}
	return (grid);
}
