#include "main.h"

/**
*print_line-to print line
*Return: void
*@n:number of charater
*/
void print_diagonal(int n)
{
        int chr;

        if (n <= 0)
{
        _putchar ('\n');
}
        else
{
        for (chr = 1; chr <= n; chr++)
{
        _putchar (95);
}
        _putchar ('\n');
}
}
