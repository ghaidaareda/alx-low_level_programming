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
	for (n < 0)
	{
		n = (-1 * n);
	}
	_putchar (n + 48);
	return (0);
}
