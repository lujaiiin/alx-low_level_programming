#include "main.h"

/**
 *is_palindrome - function
 *all - function
 *add - function
 *@s: value
 *@st: value
 *@ls: value
 *@mo: value
 * Return: always
 */

int all(char *s, int st, int ls, int mo);
int add(char *s);

int is_palindrome(char *s)
{
	int e = add(s);

	return (all(s, 0, e - 1, e % 2));
}

/**
 *add - function
 *@s: value
 *Return: always
 */

int add(char *s)
{
	int i = 0;

	if (*s)
	{
		i += add(s + 1) + 1;
	}
	return (i);
}

/**
 *all - function
 *@s: value
 *@st: value
 *@ls: value
 *@mo: value
 *Return: always
 */

int all(char *s, int st, int ls, int mo)
{
	if ((st == ls && mo % 2 != 0) || (st == ls + 1 && mo % 2 == 0))
	{
		return (1);
	}
	if (s[st] != s[ls])
		return (0);
	else
		return (all(s, st + 1, ls - 1, mo));
}
