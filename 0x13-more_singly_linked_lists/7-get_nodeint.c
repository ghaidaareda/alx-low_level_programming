#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index -Returns the nth node of a listt.
 * @head: Pointer to the head node of the list.
 * @index: Index of the nth node to be returned (starting at 0).
 * Return: Pointer to the nth node or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
