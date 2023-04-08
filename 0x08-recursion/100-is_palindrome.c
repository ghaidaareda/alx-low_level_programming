#include "main.h"
#include <string.h>
/**
 * is_palindrome_helper-function find if string is palindrom
 * Return:1 if palindrme, 0 if not
 * @s:string
 * @i:start
 * @j:end
 */
	int is_palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, i + 1, j - 1));
	}
}
/**
 * is_palindrome-function find if string is palindrom
 * Return:1 if palindrme, 0 if not
 * @s:string
 */
	int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	else
	{
		return (is_palindrome_helper(s, 0, len - 1));
	}
}
