#include "hash_tables.h"
/**
 * create_node - creates or updates a new or existing hash table node
 * @ht: a hash table implemented with separate chaining collision handling
 * @key: key at index of hash table
 * @value: value of key
 * @index: index of node in hash table array
 * Return: 1 (SUCCESS) or 0 (FAIL)
 */
int create_node(hash_table_t *ht, const char *key, const char *value,
		unsigned long int index)
{
	char *k, *v;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(node);
		return (0);
	}

	node->key = k;
	node->value = v;

	if (ht->array[index] == NULL)
		node->next = NULL;
	else
		node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key (can not be an empty string)
 * @value: value associated with key
 * Return: 1 (SUCCESS) or 0 (FAIL)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *v;
	unsigned long int idx;
	hash_node_t *node, *current;

	if (ht == NULL || key == NULL)
		return (0);


	idx = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	v = strdup(value);
	if (!v)
	{
		free(node);
		return (0);
	}

	if (ht->array[idx] != NULL)
	{
		current = ht->array[idx];
	
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
        		{
				current->value = v;
            			return (1);
        		}
			current = current->next;
		}
	}

	return (create_node(ht, key, value, idx));
}
