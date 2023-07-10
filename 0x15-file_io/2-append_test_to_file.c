#include "main.h"

/**
 * _strlen - a function that computes the length of a NULL-terminated string
 * @str: the string to measure
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
 * append_text_to_file - a function that append text to the end of a file
 * @filename: filename
 * @text_content: file data
 *
 * Return: on success 1, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int jk;

	if (!filename)
		return (-1);

	jk = open(filename, O_WRONLY | O_APPEND);

	if (jk < 0)
		return (-1);

	if (text_content)
		b_written = write(jk, text_content, _strlen(text_content));

	close(jk);

	if (b_written < 0)
		return (-1);
	return (1);
}
