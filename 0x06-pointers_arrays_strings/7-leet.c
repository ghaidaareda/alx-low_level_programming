#include "main.h"
/**
 *leet-replce
 *Return:n
 *@n:array
 */
	char *leet(char *n)
{
	char x[10] = "aAeEoOtTlL";
	char y[10] = "4433007711";
	int i;

	int j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
		if (n[i] == x[j])
			{
			n[i] = y[j];
			}
		}
	}
	return (n);
}

