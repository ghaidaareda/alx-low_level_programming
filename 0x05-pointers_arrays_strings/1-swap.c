#include "main.h"
/**
*swap_int-change pointer
*Return :void
*@a:pointer
*@b:pointer
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;


}
