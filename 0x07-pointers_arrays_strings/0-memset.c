#include "main.h"
/**
 * _memset- fills memory with a constant byte
 * Return:s
 * @s:memory area
 * @b:data to be filled
 * @n:num of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
