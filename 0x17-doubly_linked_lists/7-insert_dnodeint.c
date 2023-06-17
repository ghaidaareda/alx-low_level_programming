#include "lists.h"
/**
 *insert_dnodeint_at_index-inserts a new node at a given position
 *Return: the address of the new node, or NULL if it failed
 *@h:pointer to head node
 *@idx:index of the list where the new node should be added, starts at 0
 *@n:data in new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;
	unsigned int count = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	temp = *h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx == count)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	temp = *h;
	while (i < idx)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = temp;
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	temp->prev = new_node;
	return (new_node);
}



