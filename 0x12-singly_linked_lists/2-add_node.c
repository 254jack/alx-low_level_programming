#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a funtion that adds a new node at the start of a linked list
 * @head: double pointer to the list_t
 * @str: new string to add in the node
 *
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
