#include "main.h"

#include <stdio.h>

/**
 * main - prints the sum of all multipies of 3 or 5 up tp 1024
 * Return: Always (success)
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d", z);
	return (0);
}
