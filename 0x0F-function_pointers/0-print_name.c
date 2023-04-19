#include "function_pointers.h"
/**
 * print_name-function that prints aname
 * Return: void
 * @name:the return name
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
