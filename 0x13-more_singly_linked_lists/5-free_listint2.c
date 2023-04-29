#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2-frees a listint_t list & set head to NULL.
 * Return:void
 * @head:pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
