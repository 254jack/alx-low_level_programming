#include "hash_tables.h"

/**
 * hash_table_delete - a fucntion that deletes a hash table
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *prev, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		prev = ht->array[i];
		while (prev)
		{
			temp = prev->next;
			free(prev->key);
			free(prev->value);
			free(prev);
			prev = temp;
		}
	}
	free(ht->array);
	free(ht);
}
