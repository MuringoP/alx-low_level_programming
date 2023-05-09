#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read and print to STDOUT file.
 * @filename: text file being read
 * @letters: no of letters to be read
 * Return: i- no of bytes read & printed, 0 when fname is NULL or function fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t a;
	ssize_t i;
	ssize_t j;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(a, buf, letters);
	i = write(STDOUT_FILENO, buf, j);

	free(buf);
	close(a);
	return (i);
}
