#include "hash_tables.h"
/**
 * shash_table_create - a function that creates a sorted hash_table
 * @size: the size
 * Return: 0
*/

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *n_ht = malloc(sizeof(shash_table_t));

    if (n_ht == NULL)
        return (NULL);

    n_ht->size = size;
    n_ht->array = malloc(sizeof(shash_node_t *) * size);
    if (n_ht->array == NULL)
    {
        free(n_ht);
        return (NULL);
    }

    memset(n_ht->array, 0, sizeof(shash_node_t *) * size);
    n_ht->shead = NULL;
    n_ht->stail = NULL;

    return (n_ht);
}

/**
 * insert_sorted_node - Inserts a node into a sorted linked list
 * @head: Pointer to the head of the sorted linked list
 * @node: Node to insert
 */
void insert_sorted_node(shash_table_t *ht, shash_node_t *node)
{
    shash_node_t *curr;

    if (ht == NULL || node == NULL)
        return;

    if (ht->shead == NULL)
    {
        node->sprev = NULL;
        node->snext = NULL;
        ht->shead = node;
        ht->stail = node;
    }
    else
    {
        curr = ht->shead;
        while (curr != NULL && strcmp(curr->key, node->key) < 0)
            curr = curr->snext;

        if (curr == ht->shead)
        {
            node->sprev = NULL;
            node->snext = ht->shead;
            ht->shead->sprev = node;
            ht->shead = node;
        }
        else if (curr == NULL)
        {
            node->sprev = ht->stail;
            node->snext = NULL;
            ht->stail->snext = node;
            ht->stail = node;
        }
        else
        {
            node->sprev = curr->sprev;
            node->snext = curr;
            curr->sprev->snext = node;
            curr->sprev = node;
        }
    }
}


/**
 * shash_table_set - a function that sets a sorted hash_table
 * @ht: hash table
 * @key: hash key
 * @value: the key value
 * Return: 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int indx;
    shash_node_t *new_node = NULL, *curr = NULL;

    if (!ht || !key || !value)
        return (0);

    indx = key_index((unsigned char *)key, ht->size);
    curr = ht->array[indx];

    while (curr)
    {
        if (strcmp(curr->key, key) == 0)
        {
            free(curr->value);
            curr->value = strdup(value);
            if (!curr->value)
                return (0);
            return (1);
        }
        curr = curr->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[indx];
    ht->array[indx] = new_node;
    insert_sorted_node(ht, new_node);
    return (1);
}

/**
 * shash_table_get - a function that gets the sorted hash_table
 * @ht: hash table
 * @key: key
 * Return: 0
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int indx;
    shash_node_t *curr = NULL;

    if (!ht || !key)
        return (NULL);

    indx = key_index((unsigned char *)key, ht->size);
    curr = ht->array[indx];

    while (curr)
    {
        if (strcmp(curr->key, key) == 0)
            return (curr->value);
        curr = curr->next;
    }

    return (NULL);
}
/**
 * shash_table_print - a function that prints the sorted hash_table
 * @ht: hash table
 * Return: 0
*/
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *curr = ht->shead;

    printf("{");
    while (curr)
    {
        printf("'%s': '%s'", curr->key, curr->value);
        curr = curr->snext;
        if (curr)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_rev - a fuction that prints the hash_table values in reverse order
 * @ht: hash table
 * Return: 0
*/
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *curr = ht->stail;

    printf("{");
    while (curr)
    {
        printf("'%s': '%s'", curr->key, curr->value);
        curr = curr->sprev;
        if (curr)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - a function that deletes the hash table
 * @ht: hash table
 * Return: 0
*/
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *curr = NULL, *temp = NULL;
    unsigned long int i;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        curr = ht->array[i];
        while (curr)
        {
            temp = curr->next;
            free(curr->key);
            free(curr->value);
            free(curr);
            curr = temp;
        }
    }

    free(ht->array);
    free(ht);
}
