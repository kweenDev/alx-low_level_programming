#include "hash_tables.h"

/**
* *hash_table_create - Creates a hash table
* @size: The size of the array
*
* Description: The function creates a hash table and returns
*		a pointer to the newly created hash table.
* Returns: A pointer to the newly created hash table, NULL on failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!new_table)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	for (i = 0; i < size; ++i)
		new_table->array[i] = NULL;

	return (new_table);
}
