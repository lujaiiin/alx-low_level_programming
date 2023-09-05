#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/types.h>

#define ER STDERR_FILENO
#define US "Usage: elf_header elf_filename\n"
void sa(Elf64_Ehdr s);

/**
 * sab - function
 * @s: value
 * Return: always
 */
void sab(Elf64_Ehdr s)
{
	printf("  OS/ABI:                            ");
	switch (s.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case  ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			sa(s);
			break;
	}
}
/**
 * sa - function
 * @l: value
 * Return: always
 */

void sa(Elf64_Ehdr l)
{
	switch (l.e_ident[EI_OSABI])
	{
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		case ELFOSABI_MODESTO:
			printf("Nove11 - Modesto");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		default:
			printf("<unknown: %x>\n", l.e_ident[EI_OSABI]);
			break;
	}
}
/**
 * ent - function
 * @en: value
 * Return: value
 */

void ent(Elf64_Ehdr en)
{
	unsigned char *e = (unsigned char *)&en.e_entry;
	int l = 0, j = 0;

	printf("  Entry point address:               ");

	if (en.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		j = en.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!e[j])
			j--;
		printf("%x", e[j--]);

		for (; j >= 0; j--)
			printf("%02x", e[j]);
		printf("\n");
	}
	else
	{
		j = 0;
		l = en.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!e[j])
			j++;
		printf("%x", e[j++]);
		for (; j <= l; j++)
		{
			printf("\n");
		}
	}
}
/**
 * cl - function
 * @c: value
 * Return: always
 */

void cl(Elf64_Ehdr c)
{
#define S EI_CLASS

	printf("  Class:                             ");
	if (c.e_ident[S] == ELFCLASSNONE)
	{
		printf("none\n");
	}
	else if (c.e_ident[S] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else if (c.e_ident[S] == ELFCLASS32)
	{
		printf("ELF32\n");
	}

}

/**
 * ve - function
 * @v: value
 * Return: always
 */

void ve(Elf64_Ehdr v)
{
	printf("  Version:                           %d", v.e_ident[EI_VERSION]);

	switch (v.e_ident[EI_VERSION])
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

void da(Elf64_Ehdr d)
{
#define A EI_DATA

	printf("  Data:                              ");
	if (d.e_ident[A] == ELFDATANONE)
	{
		printf("none\n");
	}
	else if (d.e_ident[A] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else if (d.e_ident[A] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
}

/**
 * ty - function
 * @te: value
 * Return: always
 */

void ty(Elf64_Ehdr te)
{
	int i = 0;
	char *t = (char *)&te.e_type;

	if (te.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		i = 1;
	}
	printf("  Type:                              ");
	if (t[i] == ET_NONE)
	{
		printf("NONE (None)\n");
	}
	else if (t[i] == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (t[i] == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (t[i] == ET_DYN)
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
void abi(Elf64_Ehdr a)
{
	printf("  ABI Version:                       %d",
			a.e_ident[EI_ABIVERSION]);
}
/**
 * ma - function
 * @m: value
 * Return: always
 */
void ma(Elf64_Ehdr m)
{
	int i;

	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%2.2x", m.e_ident[i]);
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
	Elf64_Ehdr E;

	if (c != 2)
		dprintf(ER, US), exit(98);
	f1 = open(v[1],  O_WRONLY | O_CREAT | O_TRUNC);
	if (f1 == -1)
	{
		dprintf(ER, "cant open: %s\n", v[1]), exit(98);
	}
	r = read(f1, &E, sizeof(E));
	if (r < 1 || r != sizeof(E))
	{
		dprintf(ER, "cant read: %s\n", v[1]);
		exit(98);
	}
	if (E.e_ident[0] == 0x7f && E.e_ident[1] == 'E'
			&& E.e_ident[2] == 'L' && E.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(ER, "NOT ELF FILE %s\n", v[1]), exit(98);
	l = close(f1);
	if (l == -1)
	{
		dprintf(ER, "cant close %d\n", f1);
		exit(98);
	}
	return (0);
}
