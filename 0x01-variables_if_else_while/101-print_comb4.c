#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int d, b, q;

	for (d = '0'; d <= '9'; d++)
	{
		for (b = d + 1; b <= '9'; b++)
		{
			for (q = b + 1; q <= '9'; q++)
			{
				if ((b != d) != q)
				{
					putchar(d);
					putchar(b);
					putchar(q);
					if (d == '7' && b == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
