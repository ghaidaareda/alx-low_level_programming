#include "lists.h"
/**
 *print_dlistint-function that prints all the elements of a dlistint_t list.
 *Return: the number of nodes
 *@h:pointer to head
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	unsigned int count = 0;

	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
