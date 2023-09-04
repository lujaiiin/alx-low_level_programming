#include "main.h"

/**
 * append_text_to_file - function
 * @filename: value
 * @text_content: value
 * Return: always
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f1, i = 0, r = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	f1 = open(filename, O_WRONLY | O_APPEND);
	if (f1 == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[i])
		{
			i++;
		}
		r = write(f1, text_content, i);
	}
	close(f1);
	if (r != i)
	{
		return (-1);
	}
	return (1);
}
