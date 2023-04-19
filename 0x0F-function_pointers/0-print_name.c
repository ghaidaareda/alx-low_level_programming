#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * print_name-function that prints aname
 * Return: void
 * @name:the return name
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		exit(1);
	}
}
