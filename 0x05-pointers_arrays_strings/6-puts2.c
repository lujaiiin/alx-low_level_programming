#include "main.h"

/**
 *puts2 - function prints to secound
 *
 *@str: value i use
 *Return: no
 */

void puts2(char *str)
{
	int len, i;

	len = _strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (len % 2 == 0)
		{
		printf("%d", str[i]);
		}
	}
}

/**
 *_strlen - function to lenght
 *Return: ad
 *@s: kkk
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
