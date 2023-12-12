#include "search_algos.h"

/**
 * interpolation_search - function that performs interporlation search
 * @array: int array
 * @size: int size
 * @value: value
 *
 * Return: -1 or index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p = 0, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		p = low + (((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
		if (p >= size)
		{
			printf("Value checked array[%lu] is out of range\n", p);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
		else if (array[p] > value)
			high = p - 1;
		else
			low = p + 1;
	}
	return (-1);
}
