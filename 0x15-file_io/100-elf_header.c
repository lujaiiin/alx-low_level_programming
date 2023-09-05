#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/types.h>

#define ER STDERR_FILENO
#define US "Usage: elf_header %s\n"
/**
 * ent - function
 * @e: value
 * @en: value
 * Return: value
 */

void ent(unsigned long int e, unsigned char *en)
{
	printf("  Entry point address:               ");

	if (en[EI_DATA] == ELFDATA2MSB)
	{
		e = ((e << 8) & 0xFF00FF00) |
			((e >> 8) & 0xFF00FF);
		e = (e << 16) | (e >> 16);
	}

	if (en[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e);
	}
	printf("%#lx\n", e);
}
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
		if (E[i] == 127 && E[i] == 'E' &&
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
 * ve - function
 * @v: value
 * Return: always
 */

void ve(unsigned char *v)
{
	printf("  Version:                           %d", v[EI_VERSION]);

	switch (v[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
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
 * ty - function
 * @t: value
 * @te: value
 * Return: always
 */

void ty(unsigned int t, unsigned char *te)
{
	if (te[EI_DATA] == ELFDATA2MSB)
	{
		t >>= 8;
	}
	printf("  Type:                              ");
	if (t == ET_NONE)
	{
		printf("NONE (None)\n");
	}
	else if (t == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (t == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (t == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else
		printf("CORE (Core file)\n");

}
/**
 * abi - function
 * @a: value
 * Return: always
 */
void abi(unsigned char *a)
{
	printf("  ABI Version:                       %d",
			a[EI_ABIVERSION]);
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
		dprintf(ER, US, v[1]), exit(98);
	f1 = open(v[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(ER, "cant open: %s\n", v[1]), exit(98);
	}
	E = malloc(sizeof(Elf64_Ehdr));
	if (E == NULL)
	{
		close(f1);
		exit(98);
	}
	r = read(f1, E, sizeof(Elf64_Ehdr));
	if (r < 1)
	{
		free(E);
		dprintf(ER, "cant read: %s\n", v[1]);
		close(f1);
		exit(98);
	}
	EL(E->e_ident);
	ma(E->e_ident);
	cl(E->e_ident);
	da(E->e_ident);
	ve(E->e_ident);
	abi(E->e_ident);
	ty(E->e_type, E->e_ident);
	ent(E->e_entry, E->e_ident);
	l = close(f1);
	if (l == -1)
	{
		dprintf(ER, "cant close %d\n", f1);
		exit(98);
	}
	return (0);
}
