#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index-function that searches for an integer
 * Return:index or -1
 * @array:array
 * @size:number of elements
 * @cmp:pointer to a function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		exit(1);
	}
	else
	{
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
			return(-1);
	}
}
