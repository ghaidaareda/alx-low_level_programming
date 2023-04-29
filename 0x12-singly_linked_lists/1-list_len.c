#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * list_len-print all elements of list_t list
 * Return:number of nodes
 * @h:pointer to list_t head
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
	count++;
	ptr = ptr->next;
	}
	return (count);
}
