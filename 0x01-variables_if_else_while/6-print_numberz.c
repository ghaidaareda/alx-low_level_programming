#include <stdio.h>

/**
* main- print numbers
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	putchar(48 + n);
	putchar('\n');
	return (0);
}
