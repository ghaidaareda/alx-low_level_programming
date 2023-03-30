#include "main.h"
/**
 * cap_string-change to upper case
 * Return:char
 * @n:string
 */
	char *cap_string(char *n)
{
	int i;

	for (i = 0 ; n[i] != '\0'; i++)
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		else if (n[i - 1] == ' ' ||
		n[i - 1] == '\t' ||
		n[i - 1] == '\n' ||
		n[i - 1] == ',' ||
		n[i - 1] == ';' ||
		n[i - 1] == '.' ||
		n[i - 1] == '!' ||
		n[i - 1] == '?' ||
		n[i - 1] == '"' ||
		n[i - 1] == '(' ||
		n[i - 1] == ')' ||
		n[i - 1] == '{' ||
		n[i - 1] == '}' ||
		i == 0)
		{
		n[i] = n[i] - 32;
		}
	return (n);
}
