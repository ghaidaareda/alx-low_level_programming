#include <stdio.h>
#include "main.h"
/**
 * main-print file name
 * Return:0
 * @argc:count
 * @argv:vector
 */
	int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != 0 ; i++)
	{
		if (i < argc)
		{
		printf("%s\n", argv[i]);
		}
	}
	return (0);
}
