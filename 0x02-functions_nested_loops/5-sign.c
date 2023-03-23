#include "main.h"
#include <stdio.h>

/**
* print_sign-sign
* Return :1 in positive,0 in zero, -1 in negative
* @n:number checked
*/
int print_sign(int n)
{
	if (n > 48)
{
	printf("+\n");
	return (1);
}
	else if (n < 48)
{
        printf("-\n");
	return (-1);  
}
	else if (n == 48)
{
	printf("0\n");
}
	return (0);
}
