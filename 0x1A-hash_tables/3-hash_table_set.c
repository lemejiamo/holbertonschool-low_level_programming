#include "hash_tables.h"
/**
 * hash_table_set - add a node to has table
 * @ht: pointer to hash_table
 * @key: key to hash
 * @value:  value associated to the key
 * Return: 1 if succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_key;
	unsigned int possition;
	hash_node_t *new_element = NULL, *slot = NULL;

	/* verify if table exist */
	if (!ht)
		return (FAIL);

	/* apply hash_funtion to key and find a possition in table*/
	hash_key = hash_djb2((unsigned char *)key);
	possition = hash_key % ht->size;
    
    /* create  a new element to the list */
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (FAIL);
	new_element->value = (char *)value;
	new_element->key = (char *)hash_key;

	/*add the element to the list*/
	slot = ht->array[possition];
    if (slot == NULL)
		new_element->next = NULL;
	else
	   	new_element->next = slot;
        
    ht->array[possition] = new_element;

	return (SUCCES);
}