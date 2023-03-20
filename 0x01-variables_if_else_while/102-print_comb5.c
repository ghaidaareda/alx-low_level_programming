#include <stdio.h>

/**
* main- print_comination
* Return: Always 0 (success)
*/
int main(void)
{
	int x;
	int y;
	int z;
	int n;

	for (x = 0; x < 10; x++)
{
	for (y = 0; y < 10; y++)
{
	for (z = 0; z < 10; z++)
{
	for (n = 0; n < 10; n++)
{
	if (y < n && x <= z)
{
	putchar (48 + x);
	putchar (48 + y);
	putchar (' ');
	putchar (48 + z);
	putchar (48 + n);
	if (y < 8)
{
	putchar (',');
	putchar (' ');
}
}
}
}
}
}
	putchar ('\n');
	return (0);
}
