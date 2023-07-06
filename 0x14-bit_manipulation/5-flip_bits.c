#include "main.h"

/**
 * flip_bits - a function that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int c_num;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		c_num = exclusive >> j;
		if (c_num & 1)
			count++;
	}

	return (count);
}
