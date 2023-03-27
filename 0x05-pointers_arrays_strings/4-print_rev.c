#include "main.h"
/**
 * print_rev-print string
 * Return:void
 * @s:string
 */
	void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i--)
	_putchar(s[i]);
	_putchar('\n');
}
