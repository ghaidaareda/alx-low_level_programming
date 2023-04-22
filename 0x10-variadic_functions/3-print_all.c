#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all-function that prints anything
 * Return:void
 * @format:list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i; char c; double f;
       	char *s; int x = 0;
	va_list all;
	va_start(all, format);
	while (format != NULL && format[x] != '\0')
	{
	switch (format[x])
	{
	case 'c':
		c = va_arg(all, int);
		printf("%c", c);
		break;
	case 'i':
		i = va_arg(all, int);
		printf("%d", i);
		break;
	case 'f':
		f = va_arg(all, double);
		printf("%f", f);
		break;
	case 's':
		s = va_arg(all, char*);
		if (s == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", s);
		break;
	}
	if (format[x + 1] != '\0' && (format[x] == 'c' ||format[x] == 'i' || format[x] == 'f' || format[x] == 's'))
	{
		printf (", ");
	}
	x++;
	}
	printf("\n");
	va_end(all);
}
