#include "lists.h"
/**
 *get_dnodeint_at_index-function returns the nth node of a linked list
 *Return:nth node of a linked list
 *@head:pointer to head node
 *@index:index of node wanted
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i;

	for (i = 0; i < index && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
