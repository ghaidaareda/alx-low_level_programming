#include "main.h"

/**
*print_alphabet_x10-command
*Retaun :Always void
*/
void print_alphabet_x10(void)
{
	int n;
	int i = 0;

	while (i < 10)
{
	for (n = 'a'; n <= 'z'; n++)
{
	_putchar(n);
}
	_putchar('\n');
	i++;
}
}

