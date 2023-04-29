#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node-function that adds a new node at the beginning of a list_t list.
 * @head:head of old node
 * @str:data to be dublicatd
 * Return:adress to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	char *s = strdup(str);
	size_t len = strlen(str);

	if (ptr == NULL || s == NULL)
	{
		free(ptr);
		free(s);
		return (NULL);
	}
	ptr->str = s;
	ptr->len = len;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
