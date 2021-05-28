#include "hash_tables.h"
/**
 * key_index - return the index  in a hash table of a key
 * @key: is the key to search
 * @size: of the hash table
 * Return: position in the hash_table of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = (hash_djb2(key)) % size;
	return (index);
}