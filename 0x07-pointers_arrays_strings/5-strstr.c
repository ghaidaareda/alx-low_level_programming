#include "main.h"
#include <stdlib.h>
/**
 *_strstr-function that locates a substring
 * Return:pointer to substring that matches, or NULL if not found
 * @haystack:string
 * @needle:substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	int x = 0;

	while (needle[x] != '\0')
		x++;
		while (*haystack)
		{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			break;
		}
		if (i != x)
		haystack++;
		else
		return (haystack);
		}
	return (NULL);
}
