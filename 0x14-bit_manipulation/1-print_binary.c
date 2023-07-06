#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary equivalent of 
 * a decimal number
 * @n: binary number
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');

	putchar('\n);
}
int main(void)
{
	unsigned long int num = 42;

	print_binary(num);

	return 0;
}
