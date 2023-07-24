#include "main.h"

/**
 *puts_half -function
 *
 *@str: pointer
 */

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != 0)
		a++;
	a--;
	if (a % 2 == 0)
		b = a / 2;
	else
		b = (a - 1) / 2;
	while (a > b)
	{
		++b;
		printf("%c", str[b]);
	}
	printf("\n");
}
