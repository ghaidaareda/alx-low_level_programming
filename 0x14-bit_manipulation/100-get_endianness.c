#include "main.h"
/**
 * get_endianness-chaecks endianness
 * Return:0(big), 1(little)
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	else
		return (0);
}
