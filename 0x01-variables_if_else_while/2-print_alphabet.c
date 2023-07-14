#include <stdio.h>
/**
 * main - prints the alphabet.
 * Return : always 0;
 */
int main(void)
{
	char s[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (0);
}
