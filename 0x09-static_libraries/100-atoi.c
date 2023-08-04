#include "main.h"

/**
 * _atoi - function
 *
 *@s: the pointer
 *
 * Return: A
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int n = 0;
	int m = 1;
	int i = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			m *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			i = 1;
			n = (n * 10) + (s[a] - '0');
			a++;
		}
		if (i == 1)
		{
			break;
		}
		a++;
	}
	n *= m;
	return (n);
}
