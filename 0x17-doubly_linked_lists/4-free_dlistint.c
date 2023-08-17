#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: Pointer to the head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ffre;

	while (head != NULL)
	{
		ffre = head;
		head = head->next;
		free(ffre);
	}
}
