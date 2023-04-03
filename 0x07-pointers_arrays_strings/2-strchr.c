#include "main.h"
#include <stddef.h>
/**
 * _strchr-locates a character in a string
 * Return:c location or null
 * @s:string pointer
 * @c:character
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s != c)
			s++;
	}
	return (NULL);
}
