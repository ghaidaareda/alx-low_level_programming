#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main-start
 *@argc:arguments count
 *@argv:argument vectors
 *Return:1, 2, 0
 */
int main(int argc, char *argv[])
{
        int num1, num2, result;

        int (*op_func)(int, int);

        if (argc != 4)
        {
        printf("Error\n");
        return (1);
        }
        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
        op_func = get_op_func(argv[2]);
        if (op_func == NULL || argv[2][1] != '\0')
        {
        printf("Error\n");
        return (2);
        }
        result = op_func(num1, num2);
        printf("%d\n", result);
        return (0);
}
/**
 * perform arithmetic operation on two integers
 *
 * @param num1 first integer
 * @param op operator string
 * @param num2 second integer
 * @return result of the arithmetic operation
 */
int perform_operation(int num1, char *op, int num2)
{
int result;

	if (*op == '+')
	{
	result = num1 + num2;
	}
	else if (*op == '-')
	{
	result = num1 - num2;
	}
	else if (*op == '*')
	{
	result = num1 * num2;
	}
	else if (*op == '/')
	{
	if (num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}
	result = num1 / num2;
	}
	else if (*op == '%')
	{
	if (num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}
	result = num1 % num2;
	}
	else	
	{
	printf("Error\n");
	exit(99);
	}
	return (result);
}
