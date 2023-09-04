#include "main.h"

/**
 * create_file - function
 * @filename: value
 * @text_content: value
 * Return: always
 */

int create_file(const char *filename, char *text_content)
{
	int f1, i = 0, r = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		f1 = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
		if (f1 == -1)
		{
			return (-1);
		}
		while (text_content[i])
		{
			i++;
		}
		r = write(f1, text_content, i);
	}
	close(f1);
	if (i != r)
	{
		return (-1);
	}
	return (1);
}
