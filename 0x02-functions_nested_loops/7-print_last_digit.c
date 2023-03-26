#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number's last digit result
 * Return: value of the last digit
 */
	int print_last_digit(int n)
{
	int lst;

	lst = (n % 10);
	if (lst < 0)
	{
		lst = (-1 * lst);
	}
	_putchar (lst + 48);
	return (0);
}
