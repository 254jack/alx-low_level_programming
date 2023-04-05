#include "main.h"
/**
 * factorail - a function tha treturns the factorial of a given number
 * @n - int value
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n -1));
}
