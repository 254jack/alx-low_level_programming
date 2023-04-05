#include "main.h"
/**
 * is_prime_number - a function that returns a prime number
 * @n: integer
 *
 * Return: 1 if success and 0 if fail
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
/**
 * prime - a function that evaluates 1 from n
 * @n: integer
 * @i: interate number
 *
 * Return: 1 on success
 */
int prime(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
}

