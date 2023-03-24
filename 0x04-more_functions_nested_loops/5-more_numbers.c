#include "main.h"

/**
* more_numbers-write digits except
* Return: void
* void:digit
*/
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
{
	for (b = 0; b <= 14; b++)
{
	if (b > 9)
{
	_putchar ((b / 10) + 48);
}
	_putchar ((b % 10) + 48);
}
	_putchar ('\n');
}
}
