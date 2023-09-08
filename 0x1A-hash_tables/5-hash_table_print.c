#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int toggle;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0, toggle = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			if (toggle == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			while ((temp = temp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}

			toggle = 1;
		}
	}

	printf("}\n");
}
