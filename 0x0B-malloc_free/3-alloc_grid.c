#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid-function that returns a pointer to a 2D array of integers
 * Return:Null or 2D
 * @width:width
 * @height:height
 */
	int **alloc_grid(int width, int height)
{
	int **grid;

	int i, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
		for (y = 0; y < i; y++)
		{
			free(grid[y]);
		}
		free(grid);
		return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
		grid[i][y] = 0;
	}
	return (grid);
}
