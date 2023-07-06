#include "main.h"

/**
 * print_binary - a function that prints the binary equivalent of a decimal number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int c_num;

	for (j = 63; j >= 0; j--)
	{
		c_num = n >> j;

		if (c_num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
