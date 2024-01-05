#include "hash_tables.h"

/**
* key_index - Finds the index of a key in a hash table
* @key: The key
* @size: The size of the array
*
* Return: The index at which the key should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
