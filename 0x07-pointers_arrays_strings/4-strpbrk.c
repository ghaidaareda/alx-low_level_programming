#include "main.h"
#include <stddef.h>
/**
 * _strpbrk-function that searches a string for any of a set of bytes
 * Return:pointer to s that matches, or NULL if no such byte is found
 * @s:string
 * @accept:prefix
 */
	char *_strpbrk(char *s, char *accept)
{
	int i;

	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		return (&s[i]);
	}
	}
	}
	return (NULL);
}
