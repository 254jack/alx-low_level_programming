#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 * @b: binary number string
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int d_val = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		d_val = 2 * d_val + (b[j] - '0');
	}

	return (d_val);
}
