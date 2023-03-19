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

for (x = 0; x < 10; x++)
{
	for (y = 0; y < 10; y++)
{
	for (z = 0; z < 10; z++)
{
	if (x < y && y < z && x != y && y != z && x != z)
{
	putchar (48 + x);
	putchar (48 + y);
	putchar (48 + z);
	putchar (',');
	putchar (' ');
}
}
}
}
	putchar ('\n');
	return (0);
}
