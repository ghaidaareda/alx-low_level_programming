#include "search_algos.h"
#include <stdio.h>
/**
*print_array-print array to search in.
*Return:void
*@array:pointer to the first element of the array to search in
*@start:number of elements in array
*@end: the value to search for
*/
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
		printf(", ");
	}
	printf("\n");
}
/**
*binary_search-searches a value in an array byLinear search algorithm.
*Return:first index where value is located
*@array:pointer to the first element of the array to search in
*@size:number of elements in array
*@value: the value to search for
*/

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
	print_array(array, start, end);
	while (start < end)
	{
		mid = (start + end) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		print_array(array, start, end);
	}
return (-1);
}
