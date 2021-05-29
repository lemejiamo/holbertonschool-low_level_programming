#include "hash_tables.h"

/**
 * search_in_list - search a key in a linked list
 * @ht: pointer to hash_table
 * @key: key to search
 * Return: 1 if match 0 if not
 */
int search_in_list(hash_table_t *ht, const char *key, unsigned int possition)
{

	for ( ; ht->array[possition]; )
	{
		if ((strcmp(ht->array[possition]->key, key)) == 0)
			return (0);
		else
			ht->array[possition] = ht->array[possition]->next;
	}
	return (1);
}
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
	if (!ht || ht->size == 0)
		return (FAIL);
	/* verify is key it's empty */
	if (key == NULL || key[0] == '\0')
		return (FAIL);

	/* apply hash_funtion to key and find a possition in table*/
	hash_key = hash_djb2((unsigned char *)key);
	possition = hash_key % ht->size;

	/* verify if key already exist */
	if(   (search_in_list(ht, key, possition)) == 0)
		return (FAIL);


	/* create  a new element to the list */
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (FAIL);
	new_element->value = strdup((const char *)value);
	new_element->key = strdup((const char *)key);


	/*add the element to the list*/
	slot = ht->array[possition];
	if (slot == NULL)
		new_element->next = NULL;
	else
		new_element->next = slot;

	ht->array[possition] = new_element;

	return (SUCCES);
}