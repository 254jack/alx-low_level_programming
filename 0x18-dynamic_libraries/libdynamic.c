#include "main.h"
#include <unistd.h>
/**
 * _putchar - a putchar function
 * @c: character
 * Return: 0
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
 * _islower - a islower function
 * @c: character
 * Return: 0
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _isalpha - a isalpha function
 * @c: character
 * Return: 0
 *
 */
int _isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _abs - a abs function
 * @n: character
 * Return: 0
 *
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return ((n * -1));
	}
	return (0);
}
/**
 * _isupper - a isupper function
 * @c: character
 * Return: 0
 *
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
