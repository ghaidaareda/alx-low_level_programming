#include "main.h"

/**
 * _strncat-concatenates two strings
 * Return:dest
 * @dest:string
 * @src:string
 * @n:number of ch
 */
	char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	if (i < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
