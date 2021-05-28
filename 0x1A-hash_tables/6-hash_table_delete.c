#include "hash_tables.h"
/**
 *free_listint - free all malloc allocation
 *@head: pointer to head of the list
 *Return: none
 */
void free_listint(hash_node_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head->key);
	free(head->value);
	free(head);
}
/**
 * hash_table_delete - free a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;

	if (ht == NULL)
	{
		free(ht);
		return;
	}

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_listint(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
