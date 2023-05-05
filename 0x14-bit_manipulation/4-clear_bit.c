#include "main.h"
/**
 * clear_bit-function sets the value of a bit to 1 at given index
 * Return: 1 if it worked, or -1 if an error occurred
 * @n:pointer to number given
 * @index:idex of bit to be set
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(unsigned long int)))
	{
		return (-1);
	}
	else
	{
		*n = *n & (~(1 << index));
	}
	return (1);
}
