#include "main.h"
/**
 * _strspn-gets the length of a prefix substring
 * Return:number of bytes in the initial segment of s
 *@s:string
 *@accept:prefix
 */
	unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	unsigned int j;
	
	int len = 0;
	for (i = 0; s[i] != '\0'; i++ )
	{
		for (j = 0; accept[j +1] == '\0'; len++ )
		{
			if (s[i] != accept[j])
			{
			break;
			}
		}
	}
	return (len);
}
