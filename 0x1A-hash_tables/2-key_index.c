#include "hash_tables.h"

/**
 * key_index - A function that give the index of a key.
 *
 * @key: A given key.
 * @size: A size of our hash table.
 *
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2((unsigned char *)key) % size;
	return (hash_value);
}
