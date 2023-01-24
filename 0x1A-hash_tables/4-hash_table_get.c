#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: hash table of saved key/value pairs
 * @key: key to a saved value
 * Return: value of node (SUCCESS) or NULL (FAIL)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
