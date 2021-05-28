#include "hash_tables.h"
/**
 * hash_table_print - print hash table.
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, begin = 0;
	hash_node_t *slot = NULL;

	printf("{");

	for (; i <  ht->size; i++)
	{
		slot = ht->array[i];
		while (slot != NULL)
		{
			if (begin != 0)
				printf(", ");
			printf("'%s': '%s'", slot->key, slot->value);
			slot = slot->next;
			begin++;
		}
	}
	printf("}\n");
}