#include <stdio.h>
/*
 * main - print the alphabet whitout q and e
 * Return always 0 (success)
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
