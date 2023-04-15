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

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			{
			return (NULL);
			}
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
			if (new_ptr == NULL)
			{
			return (NULL);
			}
	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	if (new_size < old_size)
	{
		memset((char *)new_ptr + new_size, 0, old_size - new_size);
	}
		free(ptr);
	}
		return (new_ptr);
}

