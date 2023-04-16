#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr-concatenates all the arguments in a program
 * Return:pointer to new string
 * @ac:num of arguments
 * @av:string
 */
	char *argstostr(int ac, char **av)
{
	int len_av = 0;

	int i;

	int j = 0;

	char *con;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len_av = len_av + strlen(av[i]) + 1;
	}
	con = malloc(len_av * sizeof(char));
		if (con == NULL)
		{
		return (NULL);
		}
	for (i = 0 ; i < ac; i++)
	{
		strcpy(con + j, av[i]);
		j = j + strlen(av[i]);
		con[j] = '\n';
		j++;
	}
	con[j] = '\0';
	return (con);
}
