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
 * cl - function
 * @c: value
 * Return: always
 */

void cl(unsigned char *c)
{
#define S EI_CLASS

	printf("  Class:                             ");
	if (c[S] == ELFCLASSNONE)
	{
		printf("none\n");
	}
	else if (c[S] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else if (c[S] == ELFCLASS32)
	{
		printf("ELF32\n");
	}

}

/**
 * da - function
 * @d: value
 * Return: always
 */

void da(unsigned char *d)
{
#define A EI_DATA

	printf("  Data:                              ");
	if (d[A] == ELFDATANONE)
	{
		printf("none\n");
	}
	else if (d[A] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else if (d[A] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
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
	for (i = 0; i < EI_NIDENT; i++)
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
	int r = 0, f1, l;
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
	cl(E->e_ident);
	da(E->e_ident);
	l = close(f1);
	if (l == -1)
	{
		dprintf(ER, "cant close %d\n", f1);
		exit(98);
	}
	return (0);
}
