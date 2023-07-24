#include "main.h"

/**
 *rev_string - rev strings
 *
 *@s: value
 *
 *Return: hh
 */

void rev_string(char *s)
{
	int i, len;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

/**
 *_strlen - function
 *
 *@sl:jkfhk
 *Return: jj
 */

int _strlen(char *sl)
{
	int ad = 0;

	while (*sl != '\0')
	{
		ad++;
		sl++;
	}
	return (ad);
}
