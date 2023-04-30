#include "lists.h"

/**
 * add_nodeint -a function that adds a node at the begining of a list
 * @head: pointing the first line
 * @n: data to insert in that new node
 *
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
