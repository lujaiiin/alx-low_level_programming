#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/types.h>

#define ER STDERR_FILENO
#define US "Usage: elf_header elf_filename\n"
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
