#include <stdio.h>

/**
 * main - prints the alphabet
 * Return:  always 0 (success)
 */
int main(void)
{
	char s[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (0);
}
