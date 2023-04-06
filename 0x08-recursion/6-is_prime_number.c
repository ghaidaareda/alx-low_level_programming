#include "main.h"
/**
 * is_prime_number_helper-function to find prime number
 * Return:0 or 1 0r self
 * @n:number examined
 * @i:number  to be divided
 */
	int is_prime_number_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(n, i - 1));
	}
}
/**
 * is_prime_number-function to find prime number
 * Return:0 or helper function
 * @n:number examined
 */
	int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(n, n - 1));
	}
}
