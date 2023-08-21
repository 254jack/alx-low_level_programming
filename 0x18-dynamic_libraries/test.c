#include "main.h"
/**
 * _strcat - a strcat function
 * @dest: destination
 * @src: source
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
/**
 * _strncat - a strncat function
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
/**
 * _strncpy - a strncpy function
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
 * _strcmp - a strcmp function
 * @s1: string1
 * @s2: string2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/**
 * _memset - a memset function
 * @s: string
 * @b: character
 * @n: integer
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
