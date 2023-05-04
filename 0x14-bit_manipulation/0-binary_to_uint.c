#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint-converts a binary number to an unsigned int
 * Return:he converted number, or 0
 * @b:pointer to a string of 0 and 1 chars
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			sum = sum * 2 + (b[i] - '0');
		}
		else if
				(b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
	}
	return (sum);
}
