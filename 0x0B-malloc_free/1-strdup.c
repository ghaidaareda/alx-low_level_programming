#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup-returns a pointer to a newly allocated memory contining copy
 * Return:NULL or pointer of new string
 * @str:source string
 */
	char *_strdup(char *str)
{
	char *new = malloc(strlen(str) + 1);

	unsigned int i;

	if (new == NULL || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str) + 1; i++)
	{
		new[i] = str[i];
	}
	free(str);
	return (new);
}
