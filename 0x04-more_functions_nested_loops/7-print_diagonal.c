#include "main.h"

/**
*print_diagonl-to print line
*Return: void
*@n:number of charater
*/
void print_diagonal(int n)
{
	int row;
	int chr;

	if (n <= 0)
{
	_putchar ('\n');
}
	for (row = 1; row <= n; row++)
{
	for (chr = 1; chr <= row; chr++)
{
	_putchar (' ');
}
	_putchar (92);
	_putchar ('\n');
}
}
