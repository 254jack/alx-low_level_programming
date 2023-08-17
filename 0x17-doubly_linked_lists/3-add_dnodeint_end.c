#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list
 * @head: pointer to a pointer
 * @n: value to be assigned to the new node
 * Return: adress to the new element/ Null if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *present;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	present = *head;
	while (present->next != NULL)
		present = present->next;
	present->next = new_node;
	new_node->prev = present;

	return (new_node);
}
