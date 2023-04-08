#include "main.h"

/**
* _isupper-write upper case characters
* Return: in upper case 1, in lower case 0
* @c:upper case
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	return (0);
}
