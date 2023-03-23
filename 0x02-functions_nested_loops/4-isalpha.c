#include "main.h"

/**
*_isalpha- lowercase
*Return:1 if c 0 otheerwise
*@c: lower & upper
*/
int _isalpha(int c)

{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	return (1);
	return (0);
}
