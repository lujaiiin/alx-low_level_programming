#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - function
 *@argc: value
 *@argv: value
 *Return: always
 */

int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	p = atoi(argv[1]);
	if (p < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (p--)
	{
		printf("%02hhx%s", *ptr++, p ? " " : "\n");
	}
	return (0);
}
