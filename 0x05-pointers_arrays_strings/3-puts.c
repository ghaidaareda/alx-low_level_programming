#include "main.h"
/**
 * _puts-print string
 * Return:void
 * @*str-string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
