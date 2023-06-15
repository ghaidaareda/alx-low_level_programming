#include "lists.h"
/**
 *dlistint_len-function returns number of elements in a linked list.
 *Return:number of elements in a linked list.
 *@h:pointer to head node
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
