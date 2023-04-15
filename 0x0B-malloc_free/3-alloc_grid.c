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

	int i, *arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	arr = malloc(width * height * sizeof(int));
	if (arr == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = &arr[i * height];
	}
	memset(arr, 0, width * height * sizeof(int));
	return (grid);
}

