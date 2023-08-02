#include "main.h"

/**
 *str - function
 *@s: value
 *Return: always
 */

int str(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str(s + 1));
	}
}

/**
 *com - function
 *@s: value
 *@l: valie
 *@r: value
 *Return: always
 */

int com(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + com(s, l + 1, r - 1));
	}
	return (0);
}

/**
 *is_palindrome - function
 *@s: value
 *Return: return
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (com(s, 0, str(s - 1)));
}
