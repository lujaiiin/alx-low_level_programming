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

	for (i = 0; str[i] != '\0'; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
