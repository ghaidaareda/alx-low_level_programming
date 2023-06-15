#include "lists.h"
/**
 * add_dnodeint_end-adds a new node at the end of a dlistint_t list
 * Return: the address of the new element, or NULL if it failed
 * @head:pointer to head node
 * @n:datd of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new != NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		temp = *head;
		if (temp != NULL)
		{
			while (temp->next != NULL)
			{
			temp = temp->next;
			}
		temp->next = new;
		new->prev = temp;
		}
		else
		{
			*head = new;
		}
	return (new);
	}
	return (NULL);
}
