#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator-executes function given as a parameter on array elements
 * Return: void
 * @array:array
 * @size:array size
 * @action:function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
	else
	{
		exit(1);
	}
}
