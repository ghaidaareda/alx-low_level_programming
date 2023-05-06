#include "main.h"
/**
 * flip_bits-returns the number of bits flipped to convert number to another
 * Return:number of bits flipped
 * @n:number 1
 * @m:number 2
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
