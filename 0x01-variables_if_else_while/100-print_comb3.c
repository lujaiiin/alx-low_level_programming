#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int d, b;

	for (b = '0'; b < '9'; b++)
	{
		for (d = b + 1; d <= '9'; d++)
		{
			if (d != b)
			{
				putchar(b);
				putchar(d);
				if (b == '8' && d == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
