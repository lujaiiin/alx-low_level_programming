#include <stdio.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int i;
	char p[24] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		putchar(p[i]);
	}
	putchar('\n');
	return (0);
}
