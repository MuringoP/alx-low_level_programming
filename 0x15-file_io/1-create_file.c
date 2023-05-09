#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: -1 if function fails. Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int i, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(i, text_content, len);

	if (i == -1 || b == -1)
		return (-1);

	close(i);

	return (1);
}
