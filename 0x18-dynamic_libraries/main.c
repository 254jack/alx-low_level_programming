#include "main.h"
/**
 * _isdigit - a isdigit function
 * @c: character
 * Return: 0
 *
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * _strlen - a strlen function
 * @s: character
 * Return: 0
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
 * _puts - a puts function
 * @s: character
 * Return: 0
 *
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
}
/**
 * _strcpy - a strcpy function
 * @dest: destination
 * @src: source
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	if ((*dest != '\0') && (*src != '\0'))
	{
		while (*src != '\0')
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (result);
}
/**
 * _atoi - a atoi function
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return result * sign;
}
