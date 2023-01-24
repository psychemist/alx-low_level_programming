#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *curr, *prev;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		curr = ht->array[idx];

		while (curr)
		{
			free(curr->key);
			free(curr->value);

			prev = curr;
			curr = curr->next;

			free(prev);
		}
	}

	free(ht->array);
	free(ht);
}
