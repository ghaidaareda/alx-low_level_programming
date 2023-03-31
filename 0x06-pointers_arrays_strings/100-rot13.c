#include "main.h"
/**
 * rot13-function
 * Return:n
 * @n:srting
 */
	char *rot13(char *n)
{
	int i;

	int j;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
	if (n[i] == x[j])
	{
	n[i] = y[j];
	break;
	}
	}
	}
	return (n);
}
