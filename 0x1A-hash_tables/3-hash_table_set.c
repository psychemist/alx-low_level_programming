#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key (can not be an empty string)
 * @value: value associated with key
 * Return: 1 (SUCCESS) or 0 (FAIL)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	char *k, *v;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(k);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(v);
		return (0);
	}

	node->key = k;
	node->value = v;
	node->next = NULL;

	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
	}
	else
	{
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}

	return (1);
}
