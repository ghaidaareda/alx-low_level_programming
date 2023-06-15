#include "lists.h"
/**
 * free_dlistint-Write a function that frees a dlistint_t list
 * Return:void
 * @head:pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
