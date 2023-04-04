#include "main.h"
#include <stddef.h>
/**
 *_strstr-function that locates a substring
 * Return:pointer to substring that matches, or NULL if not found
 * @haystack:string
 * @needle:substring
 */
	char *_strstr(char *haystack, char *needle)
{
	int i;

	int j;

	int k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
		{
		if (k == i && needle[j] == haystack[k])
			{
				k++;
			}
		return (&needle[j]);
		}
	}
	return (NULL);
}
