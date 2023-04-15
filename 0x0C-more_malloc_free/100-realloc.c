#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc-function that reallocates a memory block
 * Return:ptr or null
 * @ptr:pointer to the memory previously allocated
 * @old_size:old memory size
 * @new_size:new memory size
 */
	void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		{
			return (NULL);
		}
	new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	memcpy(new_ptr, ptr, old_size);
	if (new_size < old_size)
	{
		memset(new_ptr, 0, new_size);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	free (ptr);
	}
	return(new_ptr);
		free(ptr);
	free(new_ptr);
}

