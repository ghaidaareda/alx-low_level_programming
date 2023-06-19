#include "main.h"

/**
*_strcpy-copy string
*Return:dest
*@src:source
*@dest:target
*/
	char *_strcpy(char *dest, char *src)
{
	int i;

		for (i = 0; src[i] != '\0'; i++)
		{
		dest[i] = src[i];
		}
	dest[i++] = '\0';
return (dest);
}

