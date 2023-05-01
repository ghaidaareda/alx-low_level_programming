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
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
