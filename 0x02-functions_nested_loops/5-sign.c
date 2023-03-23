#include "main.h"

/**
* print_sign-sign
* Return:1 in positive,0 in zero, -1 in negative
* @n:number checked
*/
int print_sign(int n)

{
	if (n > 48)
{
	_putchar(43);
	return (1);
}
	else if (n < 48)
{
	_putchar(45);
	return (-1);
}
	else 
{
	_putchar(48);
	return (0);
}
}
