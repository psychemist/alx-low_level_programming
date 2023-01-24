#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table (SUCCESS) or NULL (FAIL)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
	{
		array[i] = (NULL);
		i++;
	}

	table->size = size;
	table->array = array;

	return (table);
}
