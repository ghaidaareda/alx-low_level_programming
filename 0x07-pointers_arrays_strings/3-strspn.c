#include "main.h"
/**
 * _strspn-gets the length of a prefix substring
 * Return:number of bytes in the initial segment of s
 *@s:string
 *@accept:prefix
 */
	unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int j = 0;

	while (s[i] != '\0' && accept[j] != '\0')
{
	if (s[i] != accept[j])
	{
		return (0);
		}
	else
	{
	i++;
	j++;
	}
	}
	return (j);
}
