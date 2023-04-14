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
	size_t s1_len, s2_len;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}
	s3 = malloc(s1_len + n + 1);
	if (s3 == 0)
	{
	return (NULL);
	}
	memcpy(s3, s1, s1_len);
	memcpy(s3 + s1_len, s2, n);
	s3[s1_len + n] = '\0';
	return (s3);
}
