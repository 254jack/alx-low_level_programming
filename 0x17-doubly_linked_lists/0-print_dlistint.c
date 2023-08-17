#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of
 * a dlistint_t list
 * @h: pointer
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
