#include "main.h"
/**
 * _memcpy - a memcpy function
 * @dest: destination
 * @src: source
 * @n: unsigned int
 * Return: 0
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
/**
 * _strchr - a strchr function
 * @s: string
 * @c: character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (*p == c)
			return (p);
	}
	if (*p == c)
		return (p);
	return (0);
}
/**
 * _strspn - a strspn function
 * @s: string
 * @accept: accept
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *o = accept;
	int len = 0, i, k;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (len != i)
			break;
		for (k = 0; o[k] != '\0'; k++)
		{
			if (p[i] == o[k])
				len++;
		}
	}
	return (len);
}
/**
 * _strpbrk - a strpbrk function
 * @s: string
 * @accept: accept
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k, pos, Z = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	pos = i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (accept[i] == s[k])
			{
				if (k <= pos)
				{
					pos = k;
					Z = 1;
				}
			}
		}
	}
	if (Z == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (0);
	}
}
/**
 * _strstr - a _strstr function
 * @haystack: haystack
 * @needle: needle
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if ((*haystack == '\0') || (*needle == '\0'))
		return (0);
	for (; *haystack; haystack++)
	{

		for (h = haystack, n = needle; *h && *n && (*h == *n); h++, n++)
			;
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
