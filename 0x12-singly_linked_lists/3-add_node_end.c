#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_end-function adds a new node at end of a list_t list
 * @head:head of old node
 * @str:data to be dublicatd
 * Return:address to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	char *s = strdup(str);
	size_t len = strlen(str);

	if (s == NULL)
	{
		return (NULL);
	}
	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
	{
	free(s);
	return (NULL);
	}
	temp->str = s;
	temp->len = len;
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
