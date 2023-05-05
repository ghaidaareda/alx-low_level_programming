#include "main.h"
#include <stdlib.h>
/**
 * get_bit- function that returns the value of a bit at a given index
 * Return:value of a bit at a given index
 * @n:integer givin
 * @index:index of bit want to get
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 8 * sizeof(unsigned long int))
	{
		return (-1);
	}
	else if (n & (1 << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
