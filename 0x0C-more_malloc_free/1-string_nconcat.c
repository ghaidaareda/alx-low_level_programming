#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat-concatenates two strings
 * Return:newly allocated space in memory or NULL
 * @s1:first string
 * @s2:second string
 * @n:number of bytes to concatenate from s2
 */
	char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;

	if (strlen(s2) >= n)
	{
		n = strlen(s2);
	}
	s3 = malloc(strlen(s1) + n + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s3 == 0)
	{
	return (NULL);
	}
	strcpy(s3, s1);
	strncat(s3, s2, n);
	s3[strlen(s1) + n] = '\0';
	return (s3);
}
