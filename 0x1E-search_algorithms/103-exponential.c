#include "search_algos.h"

/**
 * exponential_search - function that performs exponential search
 * @array: int array
 * @size: int size
 * @value: value
 *
 * Return: -1 or index
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, newsize = 0;
	int liet;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	newsize = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	liet = binary_search(array + i, newsize, value);
	return (liet == -1 ? liet : liet + (int)i);
}

/**
 * binary_search - function that performs binary search
 * @array: int array
 * @size: int size
 * @value: value
 *
 * Return: -1 or index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *a = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", a[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (a[i] == value)
			return ((a - array) + i);
		else if (a[i] > value)
			size = i;
		else
		{
			a += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}
