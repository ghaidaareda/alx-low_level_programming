#include "search_algos.h"

/**
*linear_search-searches a value in an array byLinear search algorithm.
*Return:first index where value is located
*@array:pointer to the first element of the array to search in
*@size:number of elements in array
*@value: the value to search for
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
