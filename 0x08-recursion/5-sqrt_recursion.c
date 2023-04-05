#include "main.h"
/**
 * _sqrt_recursion - a function that returns the square root of a number
 * @n: integer
 * @i: iterate number
 * Return: 0
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - function that prints natural square root of a number
 * @n: integer
 *@i: iterate number
 * Return:0
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
	return (i);
	return (_sqrt(n, i + 1));
}
