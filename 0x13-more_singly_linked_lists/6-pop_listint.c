#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint-delete the head node of listint_t
 * Return:head node’s data (n)
 * @head:head node
 */
int pop_listint(listint_t **head)
{
	int n = (*head)->n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
