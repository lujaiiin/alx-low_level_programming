#include "main.h"
#include <stddef.h>
#include <unistd.h>

/**
 * read_textfile - function
 * @filename: value
 * @letters: value
 * Return: always
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, r;
	char buf[9000];
	ssize_t b;

	if (filename == NULL || !letters)
	{
		return (0);
	}
	else
	{
		file = open(filename, O_RDONLY);
		if (file == -1)
		{
			return (0);
		}
		else
		{
			r = read(file, &buf[0], letters);
			b = write(STDOUT_FILENO, &buf[0], r);
		}
	}
	close(file);
	return (b);
}
