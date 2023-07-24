#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
 * main - local
 *Return: 0
 */

int main(void)
{
	int i;
	char c;
	int t = 2772;

	srand(time(0));
	while (i <= t)
	{
		c = rand() % 123;
		i += c;
		putchar(c);
	}
	putchar(t - i);
	return (0);
}
