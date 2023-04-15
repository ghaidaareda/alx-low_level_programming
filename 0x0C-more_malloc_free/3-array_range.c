#include "main.h"
#include <stdlib.h>
/**
 * array_range-function that creates an array of integers
 * Return:new array or NULL
 * @min:start
 * @max:end
 */
	int *array_range(int min, int max)
{
	int *arr;

	int size = max - min + 1;

	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
