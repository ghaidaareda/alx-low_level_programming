#include "main.h"
/**
 * print_rev-print string
 * Return:void
 * @s:string
 */
	void print_rev(char *s)
{
	while (*s >= '\0')
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
