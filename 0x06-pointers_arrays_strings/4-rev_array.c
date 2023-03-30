#include "main.h"
/**
 * reverse_array-reverse string
 * Return:void
 * @a:string
 * @n:string
 */
	void reverse_array(int *a, int n)
{
	int i;

	int j;

	int item;

	for (i = 0; i <= n; i++)
		for (j = 0; j < n; j++)
			if (i < j)
			{
				item = a[j];
				a[j] = a[i];
				a[i] = item;
			}
}
