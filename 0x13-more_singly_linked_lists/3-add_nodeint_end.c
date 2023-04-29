#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end-function adds a new node at end of a list_t list
 * @head:head of old node
 * @n:integer data to be dublicatd
 * Return:address to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
	return (NULL);
	}
	temp->n = n;
	temp->next =  NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
	ptr = *head;
		while (ptr->next != NULL)
		{
		ptr = ptr->next;
		}
	ptr->next = temp;
	}
	return (temp);
}
