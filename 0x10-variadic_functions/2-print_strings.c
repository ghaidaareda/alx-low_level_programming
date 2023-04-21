#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings-function that prints numbers
 * Return: 0
 * @separator:comma
 * @n:number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *str;
	unsigned int i;

	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
	str = va_arg(strings, const char*);
		if (str == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
		printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
