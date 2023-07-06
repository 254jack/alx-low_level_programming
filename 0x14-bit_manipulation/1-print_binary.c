#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: int.
 *
 * Return: zero return.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
