#include "hash_tables.h"
/**
 * key_index - finds the index of a key in a hash table
 * @key: key of data to be saved
 * @size: size of hash table array
 * Return: index where the key/value pair should be stored in hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int hash = hash_djb2(key);

	return (hash % size);
}
