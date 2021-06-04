#include "hash_tables.h"

/**
 * hash_table_create - create a hasta table of specific size
 * @size: size of table
 * Return: a pointer to head of hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* declaration of pointer to a table */
	hash_table_t *table_hash = NULL;

	table_hash = malloc(sizeof(hash_table_t));
	if (table_hash == NULL)
	{
		return (NULL);
	}

	table_hash->size = size;
	table_hash->array = malloc(sizeof(hash_node_t) * size);
	if (table_hash->array == NULL)
	{
		return (NULL);
	}

	while ((int)size >= 0)
	{
		table_hash->array[size] = NULL;
		size--;
	}
	return (table_hash);
}
