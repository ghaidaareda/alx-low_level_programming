#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array-creates an array of chars, and initializes it with a char
 * Return:Null if size 0,to arrary
 *@c:chararacter
 *@size:size of array
 */
	char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
}
