#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main-multiply two numbers
 * Return:0 or 1
 * @argc:count
 * @argv:vector
 */
	int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		coins = cents / 25;
		cents = cents % 25;
		coins = coins + cents / 10;
		cents = cents % 10;
		coins = coins + cents / 5;
		cents = cents % 5;
		coins = coins + cents / 2;
		cents = cents % 2;
		coins = coins + cents;
		printf("%d\n", coins);
	return (0);
}
