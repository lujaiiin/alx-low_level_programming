#include "main.h"

unsigned int lenght(const char *s);
unsigned int powe(int a, unsigned int b);
/**
 * binary_to_uint - function
 * @b: value
 * Return: always
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int  l = 0, s = 0, i = 0;


	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if ((b[i] >= 65 && b[i] <= 90) || (b[i] <= 122 && b[i] >= 97))
		{
			return (0);
		}
		else
		{
			s = *b++ - 48;
			l = l * 2 + s;
		}
	}
	return (l);
}

/**
 * powe - function
 * @a: value
 * @b: value
 * Return: always
 */

unsigned int powe(int a, unsigned int b)
{
	unsigned int i, sum = 1;

	if (b == 0)
	{
		return (1);
	}
	else
	{
		for (i = 0; i < b; i++)
		{
			sum *= a;
		}
	}
	return (sum);
}

/**
 * lenght -= function
 * @s: valuw
 * Return: always
 */

unsigned int lenght(const char *s)
{
	unsigned int i = 0, ad = 0;

	while (s[i] != '\0')
	{
		ad++;
		i++;
	}
	return (ad);
}
