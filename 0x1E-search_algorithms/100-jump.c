#include "search_algos.h"

/**
 * jump_search - a function that performs a jump search
 * @array: int array
 * @size: int size
 * @value: value
 *
 * Return: 0
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, y = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += y;
	}

	y = i - y;
	printf("Value found between indexes [%lu] and [%lu]\n", y, i);
	i = i >= size ? size - 1 : i;
	while (y <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", y, array[y]);
		if (array[y] == value)
			return (y);
		y++;
	}
	return (-1);
}
