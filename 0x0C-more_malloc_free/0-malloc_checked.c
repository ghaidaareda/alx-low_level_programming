#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked-function that allocates memory
 * Return:allocated memory or 98(error)
 * @b:size needed
 */
	void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);
		if (memory == 0)
		{
		exit(98);
		}
		return (memory);
}
