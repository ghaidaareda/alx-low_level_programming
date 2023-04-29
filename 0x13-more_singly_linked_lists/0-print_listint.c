#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint-print all elements of list_t list
 * Return:number of nodes
 * @h:pointer to list_t head
 */
size_t print_listint(const listint_t *h)
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
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
