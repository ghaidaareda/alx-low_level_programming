#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers-function that prints numbers
 * Return: 0
 * @separator:comma
 * @n:number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
	int num = va_arg(numbers, int);

	printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
