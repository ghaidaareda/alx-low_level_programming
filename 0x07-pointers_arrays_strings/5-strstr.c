#include "main.h"
/**
 *_strstr-function that locates a substring
 * Return:pointer to substring that matches, or NULL if not found
 * @haystack:string
 * @needle:substring
 */
	char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		return (haystack);
			haystack++;
	}
	return ('\0');
}
