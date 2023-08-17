#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a given position.
 * @h: Pointer
 * @idx: index
 * @n: Value to be assigned to the new node.
 * Return: Address of the new node/NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *present = *h;
    unsigned int count = 0;

    if (h == NULL)
        return NULL;

    if (idx == 0)
        return add_dnodeint(h, n);

    while (present != NULL)
    {
        if (count == idx - 1)
        {
            new_node = malloc(sizeof(dlistint_t));
            if (new_node == NULL)
                return NULL;

            new_node->n = n;
            new_node->next = present->next;
            new_node->prev = present;
            if (present->next != NULL)
                present->next->prev = new_node;
            present->next = new_node;

            return new_node;
        }

        present = present->next;
        count++;
    }

    return NULL;
}
