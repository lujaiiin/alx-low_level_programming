#include "main.h"

/**
 *print_rev -  prints the rev of string
 *
 *@s: value i use
 *
 *Return: nosucces
 */

void print_rev(char *s)
{
	int lenght, i;

	lenght = _strlen(s);

	for (i = lenght - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

/**
 * _strlen - lenght function
 * @sl: value i use
 * Return: ad
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
