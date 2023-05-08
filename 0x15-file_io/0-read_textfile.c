#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads 
 * a text file and prints it to the POSIX 
 * standard output
 * @filename: text file
 * @letters: number of letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(f, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(f);
	return (w);
}
