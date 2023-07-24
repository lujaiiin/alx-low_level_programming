#include "main.h"

/**
 *puts_half - function puts half
 *
 *@str: value
 */

void puts2(char *str)
{
	int j = 0;
	int i;

	while (str[j] != '\0')
	{
		j++;
	}
	if ( j % 2 == 1)
	{
		i = (j - 1) / 2;
		i += 1;
	}
	else
	{
		i = j / 2;
	}

	for (; i < j; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
