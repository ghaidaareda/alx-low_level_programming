#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index-deletes the node at index index of a listint_t
 * Return: 1 if it succeeded, -1 if it failed
 * @index:index of the node that should be deleted
 * @head:pointer to head pointer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *curr = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 1)
	{
	*head = curr->next;
	free(curr);
	curr = NULL;
	}
	else
	{
		while (index != 1)
		{
			prev = curr;
			curr = curr->next;
			index--;
		}
	prev->next = curr->next;
	free(curr);
	curr = NUL;
	}
}
