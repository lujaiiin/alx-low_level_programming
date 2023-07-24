#include "main.h"

/**
 *puts_half - function puts half
 *
 *@str: value
 */

void puts2(char *str)
{
	int l, s, i;

	l = _strlen(str);
	s = (l + 1) / 2;

	for (i = s; i < l; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

/**
 *_strlen: function
 *
 */

int _strlen(char *s)
{
	int ad = 0;

	while (*s != '\0')
	{
		ad++;
		s++;
	}
	return (ad);
}
