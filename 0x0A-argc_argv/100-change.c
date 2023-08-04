#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argv: value
 * @argc: value
 * Return: always
 */

int main(int argc, char *argv[])
{
	int c, co = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	while (c > 0)
	{
		co++;
		if ((c - 25) >= 0)
			c -= 25;
		else if ((c - 10) >= 0)
			c -= 10;
		else if ((c - 5) >= 0)
			c -= 5;
		else if ((c - 2) >= 0)
			c -= 2;
		else
			c--;
	}
	printf("%d\n", co);
	return (0);
}
