#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table (SUCCESS) or NULL (FAIL)
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(table) * table->size);

	if (table->array == NULL)
		return (NULL);

	return (table);
}
