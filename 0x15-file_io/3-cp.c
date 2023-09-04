#include "main.h"

#define US "Usage: cp file_from file_to\n"
#define NW "Error: Can't write to %s\n"
#define NR "Error: Can't read from file %s\n"
#define NC "Error: Can't close fd %d\n"
#define ER STDERR_FILENO

/**
 * main - function
 * @argv: value
 * @argc: value
 * Return: always
 */

int main(int argc, char *argv[])
{
	int f1, f2, b, r;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(ER, US);
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(ER, NR, argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,"rw-rw-r--");
	if (f2 == -1)
	{
		dprintf(ER, NW, argv[2]);
		exit(99);
	}
	while ((r = read(f1, buffer, 1024)) > 0)
	{
		b = write(f2, buffer, r);
		if (b != r)
		{
			dprintf(ER, NW, argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(ER, NR, argv[1]), exit(98);
	}
	f1 = close(f1);
	f2 = close(f2);
	if (f1)
		dprintf(ER, NC, f1), exit(100);
	if (f2)
		dprintf(ER, NC, f1), exit(100);
	return (EXIT_SUCCESS);
}
