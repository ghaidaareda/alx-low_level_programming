#include "lists.h"
/**
 *add_dnodeint-adds a new node at the beginning of a dlistint_t list
 *Return: the address of the new element, or NULL if it failed
 *@head:pointer to head node
 *@n:data of the new node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp != NULL)
	{
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;
	if (*head != NULL)
	{
	(*head)->prev = temp;
	}
	*head = temp;
	return (*head);
	}
	return (NULL);

}
