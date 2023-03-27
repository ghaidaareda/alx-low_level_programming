#include "main.h"
#include <string.h>
/**
*puts2-print every other ch in string
*Return:void
*@str:string
*/
void puts2(char *str)
{
	int i;

	int l;

	l = strlen(str);
	for (i = 0; i < l - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
