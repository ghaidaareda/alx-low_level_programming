#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint-returns the sum of all the data (n) of a listint_t
 * Return:sum of all the data (n)
 * @head:pointer to head node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	return (sum);
}
