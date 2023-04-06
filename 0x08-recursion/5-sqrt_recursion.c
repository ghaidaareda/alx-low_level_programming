#include "main.h"
/**
 *actual_sqrt_recursion-find natural square root
 * _sqrt_recursion-function that returns the natural square root of a number
 * Return:squre root of a number
 * @n:number
 * @i:number
 */
	int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
/**
 ** _sqrt_recursion-function that returns the natural square root of a number
 * Return:square root of number
 * @n:number
 */
	int _sqrt_recursion(int n)
	{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}
