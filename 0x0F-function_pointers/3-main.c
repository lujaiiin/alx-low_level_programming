#include "3-calc.h"

/**
 * main - function
 * argc: value
 * @argv: value
 * Return: always
 */

int main(int argc, char *argv[])
{
	int (*o)(int, int);
	char *s;
	int an;

	s = argv[2];
	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (s[1] != '\0' || (*s != '+' && *s != '-' && *s != '/' && *s != '%' && *s != '*'))
	{
		printf("Error\n");
		exit (99);
	}
	if (atoi(argv[3]) == 0 && (*s == '%' || *s == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	o = get_op_func(s);
	an = o(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", an);
	return (0);
}
