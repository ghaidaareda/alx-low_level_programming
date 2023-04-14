#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc-function allocates memory for an array
 * Return:pointer to the allocated memory or NULL
 * @nmemb:elemnts
 * @size:size of each element
 */
	void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr = malloc(nmemb * size);

	if (arr == NULL)
	{
	return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memset(arr, 0, nmemb * size);
	return (arr);
}

