#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len-print all elements of list_t list
 * Return:number of nodes
 * @h:pointer to list_t head
 */
size_t listint_len(const listint_t *h)
size_t listint_len(const listint_t *h)
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
		count++;
		ptr = ptr->next;
	}
	return (count);
}
/**
 * insert_nodeint_at_index-inserts a new node at a given position
 * Return:the address of the new node, or NULL if it failed
 * @idx:position to be added in
 * @n:data intger added
 * @head:pointer to head node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t len = listint_len(*head);

	listint_t *new = malloc(sizeof(listint_t));

	if (idx > len)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		unsigned int i;
		listint_t *prev = NULL;
		listint_t *current = *head;

		for (i = 0; i < idx && current != NULL; i++)
		{
			prev = current;
			current = current->next;
		}
		if (i < idx)
		{
			return (NULL);
		}
		new->next = current;
		prev->next = new;
	}
	return (new);
}
