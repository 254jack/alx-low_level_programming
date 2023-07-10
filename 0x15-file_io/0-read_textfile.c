#include "holberton.h"

/**
 * read_textfile - a function that  reads a text file and print it to stdout
 * @filename: filename
 * @letters: letters
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t j_read;
	ssize_t j_written;
	int jk;

	if (!(filename && letters))
		return (0);

	jk = open(filename, O_RDONLY);
	if (jk == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	j_read = read(jk, buffer, letters);
	close(jk);

	if (j_read < 0)
	{
		free(buffer);
		return (0);
	}
	if (!j_read)
		j_read = letters;

	j_written = write(STDOUT_FILENO, buffer, j_read);
	free(buffer);

	if (j_written < 0)
		return (0);

	return (j_written);
}
