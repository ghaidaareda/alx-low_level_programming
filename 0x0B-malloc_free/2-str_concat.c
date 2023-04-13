#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat-function that concatenates two strings
 * Return:newly allocated space, NULL if failure
 *@s1:string 1
 *@s2:string 2
 */
	char *str_concat(char *s1, char *s2)
{
	char *s3 = malloc((strlen(s1) + strlen(s2) + 1));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
		if (s3 == NULL)
		{
			return (NULL);
		}
	strcpy(s3, s1);
	strcat(s3, s2);
	return (s3);
}
