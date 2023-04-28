#include <stdio.h>
#include "lists.h"

/**
 * print_list - a functio that prints all the elements of a linked list
 * @h: pointer to the list_t
 *
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t st = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		st++;
	}

	return (st);
}
