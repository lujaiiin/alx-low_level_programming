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

	len = ht(s);

	for (i = len-1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

int ht(char *sl)
{
	int ad;

	while (*sl != '\0')
	{
		ad++;
		sl++;
	}
	return (ad);
}
