#include "search_algos.h"

/**
 * jump_list - function that jump searches on singly linked list
 * @list: head node pointer
 * @size: int size
 * @value: value
 * Return: 0
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, y = sqrt(size), k = 0, last_j = 0;
	listint_t *last = list;

	if (!list)
		return (NULL);

	while (list->n < value)
	{
		for (last_j = i, last = list, k = 0; list->next && k < y; k++)
		{
			list = list->next;
			i++;
		}
		printf("Value checked at index [%lu] = [%d]\n", i, list->n);
		if (!list->next)
			break;
	}

	if (!list->next)
		y = last_j;
	else
		y = i >= y ? i - y : 0;
	printf("Value found between indexes [%lu] and [%lu]\n", y, i);
	i = i >= size ? size - 1 : i;
	list = last;
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", y, list->n);
		if (list->n == value)
			return (list);
		y++;
		list = list->next;
	}
	return (NULL);
}
