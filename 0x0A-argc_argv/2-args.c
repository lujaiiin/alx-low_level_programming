#include <stdio.h>

/**
 *main - function
 *@argv: value
 *@argc: value
 *Return: always
 */

int main(int argc, char const *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
