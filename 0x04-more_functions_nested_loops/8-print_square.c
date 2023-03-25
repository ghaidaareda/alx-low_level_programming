#include "main.h"

/**
*print_square- print square
*Return: void
*@size:number of charater
*/

	void print_square(int size)
{
	int row;
	int chr;

	if (size <= 0)
{
	_putchar ('\n');
}
	else
{
	for (row = 1; row <= size; row++)
{
	for (chr = 1; chr < size; chr++)
{
	_putchar (35);
}
	_putchar (35);
	_putchar ('\n');
}
}
}
