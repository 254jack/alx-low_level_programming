#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all
 * the data of a dlistint_t list
 * @head:pointer
 * Return: sum of all the data/0 if no data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *present = head;

	while (present != NULL)
	{
		sum += present->n;
		present = present->next;
	}
	return (sum);
}
