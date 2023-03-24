#include "main.h"

/**
*print_line-to print line
*Return: void
*@n:number of charater
*/
void print_line(int n)
{
	int chrlnt;

	if (n == 0)
{
	_putchar ('\n');
}
	else
{
	for (chrlnt = 1; chrlnt <= n; chrlnt++)
{
	_putchar (95);
}
	_putchar ('\n');
}
}
