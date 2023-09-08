#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: key value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newpair, *temp;
	unsigned long int indx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[indx];

	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}

	newpair = malloc(sizeof(hash_node_t));
	if (newpair == NULL)
		return (0);

	newpair->key = strdup(key);
	newpair->value = strdup(value);
	newpair->next = NULL;

	if (ht->array[indx] != NULL)
		newpair->next = ht->array[indx];

	ht->array[indx] = newpair;

	return (1);
}
