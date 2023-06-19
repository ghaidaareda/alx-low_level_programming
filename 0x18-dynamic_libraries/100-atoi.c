#include "main.h"

/**
*_atoi-convert string to integer
*Return:0 or num
*@s:integer
*/
int _atoi(char *s)
{
int i = 1;

unsigned int num = 0;

	do {
	if (*s == '-')
		i *= -1;
	else if
	(*s >= '0' && *s <= '9')
	num = (num * 10) + (*s - 48);
	else if (num > 0)
		break;
}
	while
	(*s++);
	return (num * i);
}
