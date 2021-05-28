#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: key to search
 * Return:value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_key;
	unsigned int possition;
	hash_node_t *slot = NULL;

	/*--------------- VERIFY IF TABLE EXIST ----------------*/
	if (!ht)
		return (NULL);

	/*----CONVERT THE KEY TO HASH AND FIND THE POSSITION----*/
	hash_key = hash_djb2((const unsigned char *)key);
	possition = hash_key % ht->size;

	/*---------------SEARCH IN THE HASH TABLE---------------*/
	slot = ht->array[possition];
	for (; slot; )
	{
		if ((strcmp((const char *)slot->key, (const char *)key)) == 0)
			return (slot->value);
		slot = slot->next;
	}
	return (NULL);
}
