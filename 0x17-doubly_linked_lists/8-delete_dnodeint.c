#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that
 * deletes thenode at index index of
 * a dlistint_t linked list.
 * @head: Pointer
 * @index: Index
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *present = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = present->next;
		if (present->next == NULL)
			return (-1);
		present->next->prev = NULL;
		free(present);
		return (1);
	}

	while (counter < index)
	{
		if (present->next == NULL)
			return (-1);
		present = present->next;
		counter++;
	}
	present->prev->next = present->next;
	if (present->next)
		present->next->prev = present->prev;
	if (present->next == NULL)
	{
		tmp = present->prev;
		tmp->next = NULL;
		free(present);
		return (1);
	}
	free(present);
	return (1);
}
