#include "hash_tables.h"

/**
 * key_index - a function that returns the index of a key
 * @key: key value pair
 * @size: size of array of the hash table
 * Return: 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
