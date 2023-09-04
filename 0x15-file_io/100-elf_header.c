#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/types.h>

#define ER STDERR_FILENO
#define US "Usage: elf_header %s\n"

/**
 * EL - function
 * @E: value
 * Return: always
 */
void EL(unsigned char *E)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (E[i] == 0x7f && E[i] == 'E' &&
				E[i] == 'L' && E[i] == 'F')
		{
			printf("ELF Header:\n");
		}
		else
			dprintf(ER, "Error: not ELF:\n"), exit(98);
	}
}

/**
 * ma - function
 * @m: value
 * Return: always
 */

void ma(unsigned char *m)
{
	int i;

	printf("  Magic:  ");
	for(i = 0; i < EI_NIDENT; i++)
	{
		printf("%2.2x", m[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * main - function
 * @v: value
 * @c: value
 * Return: always
 */

int main(int c, char *v[])
{
	int r, f1;
	Elf64_Ehdr *E;

	if (c != 2)
	{
		dprintf(ER, US, v[1]);
		exit(98);
	}
	f1 = open(v[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(ER, "cant open: %s\n", v[1]);
		exit(98);
	}
	r = read(f1, &E, sizeof(E));
	if (r < 1 || r != sizeof(E))
	{
		dprintf(ER, "cant read: %s\n", v[1]);
		close(f1);
		exit(98);
	}
	EL(E->e_ident);
	ma(E->e_ident);

	close (f1);
	return (0);
}
