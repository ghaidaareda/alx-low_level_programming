#include "main.h"
/**
 * factorial-function that returns the factorial of a given number
 * Return:-1, 1,factorial according to n
 * @n:num given
 */
	int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
