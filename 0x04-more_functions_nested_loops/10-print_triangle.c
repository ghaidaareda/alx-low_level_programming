#include "main.h"

/**
*print_triangle-trinagle
*Return :void
*@size:number of charater
*/

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= 1; j--)
		{
			if (i < j)
				_putchar(' ');
			else
				_putchar(35);
		}
			_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
