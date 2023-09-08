#include "hash_tables.h"

/**
 * hash_table_create - Ca function that creates a hash table
 * @size: size of the array
 * Return: NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hs = malloc(sizeof(hash_table_t));
	if (hs == NULL)
		return (NULL);

	hs->array = malloc(sizeof(hash_node_t *) * size);
	if (hs->array == NULL)
	{
		free(hs);
		return (NULL);
	}
	hs->size = size;

	for (i = 0; i < size; i++)
		hs->array[i] = NULL;

	return (hs);
}
