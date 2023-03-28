#include "main.h"
#include <stdio.h>
/**
*print_array-print arrays
*Return:void
*@n:characters number
*@a:string
*/
void print_array(int *a, int n)
{
	int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i 1 != (n - 1))
			{
				pritnf(", ");
			}
		}
	printf("\n");
}
