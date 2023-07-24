#include "main.h"

/**
 *puts2 - function prints to secound
 *
 *@str: value i use
 *Return: no
 */

void puts2(char *str)
{
	int i;
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}

	for (i = 0; i < k; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
