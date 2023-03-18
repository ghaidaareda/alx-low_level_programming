#include <stdio.h>

/**
* main- printbase 16
* Return: Always 0 (success)
*/
int main(void)
{
	int num;
	int chr;

	for (num = 0; num < 10; num++)
	putchar(48 + num);
	for (chr = 'a'; chr < 'g'; chr++)
	putchar (chr);
	putchar('\n');
	return (0);
}
