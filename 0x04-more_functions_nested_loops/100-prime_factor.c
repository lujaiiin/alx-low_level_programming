#include "main.h"

/**
 *main - prints al lll
 *
 * Return: always zegho
 */

int main(void)
{
	long int l = 612852475143;
	long int a = 2;
	long int m = 0;

	while (l > 1)
	{
		if (l % a == 0)
		{
			m = a;
			l = l / a;
		}
		else
		{
			a++;
		}
	}
	printf("%ld\n", m);
	return (0);
}
