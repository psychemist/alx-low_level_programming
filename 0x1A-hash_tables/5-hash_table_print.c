#include "hash_tables.h"
/**
 * hash_table_print - prints key/value pairs as they appear in hash table array
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	char n = 0;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];

		if (node == NULL)
			continue;
		else
		{
			while (node)
			{
				if (n)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				n = 1;
			}
		}
	}

	printf("}\n");
}
