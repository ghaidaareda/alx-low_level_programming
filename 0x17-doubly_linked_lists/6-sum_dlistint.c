#include "lists.h"
/**
 *sum_dlistint-sum of all the data (n) of a dlistint_t linked list
 *Return:sum of all the data in linked list
 *@head:pointer to head node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;
	int i;

	if (head != NULL)
	{
		for (i = 0; ptr != NULL; i++)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
		return (sum);
	}
	return (0);
}
