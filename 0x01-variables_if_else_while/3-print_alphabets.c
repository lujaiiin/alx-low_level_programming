#include <stdio.h>
/**
*main - Entry point
*Return: always 0
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
