#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: Pointer to the head
 * @index: index
 * Return: nth adress
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *present = head;

	while (present != NULL)
	{
		if (count == index)
			return (present);

		present = present->next;
		count++;
	}

	return (NULL);
}
