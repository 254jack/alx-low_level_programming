#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the node at a certain index in a list
 * @head: pointer
 * @index: index of the node to return
 *
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
