#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len-print all elements of list_t list
 * Return:number of nodes
 * @h:pointer to list_t head
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

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
