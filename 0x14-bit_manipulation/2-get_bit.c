#include "main.h"

/**
 * get_bit - a function that returns the value of a bit 
 * at an index in a decimal number
 * @n: number
 * @index: index
 *
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_val;

	if (index > 63)
		return (-1);

	b_val = (n >> index) & 1;

	return (b_val);
}
