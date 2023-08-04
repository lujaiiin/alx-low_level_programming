#include <stdio.h>
#include <stdlib.h>

/**
 *main - function
 *@argv: value
 *@argc: value
 *Return: always
 */

int main(int argc, char *argv[])
{
	unsigned int s = 0;
	int x;

	for (x = 1; x < argc; x++)
	{
		if (*argv[x] < 57 && *argv[x] > 48)
		{
			if (atoi(argv[x]) > 0)
				s += atoi(argv[x]);
		}
		else if (*argv[x] > 57 || *argv[x] < 48)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", s);
	return (0);
}
