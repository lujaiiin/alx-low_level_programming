#include "main.h"

/**
 *_sqrt_recursion - function
 *@n: value
 *@i: value
 *Return: always
 */

int s(int n, int i);

int _sqrt_recursion(int n)
{
	return (s(n, 1));
}

/**
 *s - function
 *@n: value
 *@i: value
 *Return: always
 */

int s(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (s(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
