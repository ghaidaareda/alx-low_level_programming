#include "lists.h"
#include <stdlib.h>
/**
 * free_listint-frees a listint_t list
 * Return:void
 * @head:pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
