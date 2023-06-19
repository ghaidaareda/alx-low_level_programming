#include "main.h"
/**
*_strlen-string lenghth
*Return:string lenghth
*@s:pointer
*/
int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
	count++;
	s++;
}
return (count);
}
