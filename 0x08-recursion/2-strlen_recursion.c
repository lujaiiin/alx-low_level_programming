#include "main.h"

/**
 *_strlen_recursion - function
 *@s: value
 *Return: always
 */

int _strlen_recursion(char *s)
{
	int ad;

	ad = 0;

	if (*s > '\0')
	{
		ad += _strlen_recursion(s + 1) + 1;
	}
	return (ad);
}
