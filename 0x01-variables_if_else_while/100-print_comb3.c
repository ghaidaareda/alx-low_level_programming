#include <stdio.h>

/**
* main- print_comination
* Return: Always 0 (success)
*/
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
{
	for (y = 0; y < 10; y++)
{
	if (x < y && x != y)
{
	putchar (48 + x);
	putchar (48 + y);
	putchar (',');
	putchar (' ');
}
}
}
	putchar ('\n');
	return (0);
}
