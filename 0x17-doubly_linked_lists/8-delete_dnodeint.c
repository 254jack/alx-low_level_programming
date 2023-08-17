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
	dlistint_t *present, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	present = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(present);
		return (1);
	}

	while (present != NULL)
	{
		if (count == index)
		{
			if (present->next == NULL)
			{
				present->prev->next = NULL;
			}
			else
			{
				temp = present;
				present = present->next;
				temp->prev->next = present;
				present->prev = temp->prev;
			}
			free(temp);
			return (1);
		}

		present = present->next;
		count++;
	}

	return (-1);
}
