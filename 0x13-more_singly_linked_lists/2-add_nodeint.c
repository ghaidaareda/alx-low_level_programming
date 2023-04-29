#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint-function that adds a new node at the beginning of a list_t list.
 * @head:head of old node
 * @n:integer data in added node
 * Return:adress to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
