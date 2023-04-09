#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main-multiply two numbers
 * Return:0
 * @argc:count
 * @argv:vector
 */
	int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	int j;
	int num;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
		}
	num = atoi(argv[i]);
	if (num > 0)
	{
	sum += num;
	}
	}
	printf("%d\n", sum);
	return (0);
}
