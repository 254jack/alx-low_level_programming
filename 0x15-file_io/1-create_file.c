#include "main.h"

/**
 * _strlen - a function that compute the length of a NULL-terminated string
 * @str: string to measure
 *
 * Return: 0
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		++len;

	return (len);
}

/**
 * create_file - a function that creates a file
 * @filename: filename
 * @text_content: file data
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int jk;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (jk < 0)
		return (-1);

	if (text_content)
		b_written = write(jk, text_content, _strlen(text_content));

	close(jk);

	if (b_written < 0)
		return (-1);
	return (1);
}
