#include "hash_tables.h"

/**
* shash_table_create - Creates a sorted hash table.
* @size: The size of the array.
* Return: A pointer to the created sorted hash table.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	memset(ht->array, 0, sizeof(shash_node_t *) * size);
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
* shash_table_set - Inserts a key/value pair into the sorted hash table.
* @ht: The sorted hash table.
* @key: The key to insert.
* @value: The value to insert.
* Return: 1 if successful, 0 otherwise.
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	unsigned long int index = hash_djb2(key) % ht->size;
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		shash_node_t *current = ht->array[index];
		shash_node_t *prev = NULL;

		while (current != NULL && strcmp(current->key, key) < 0)
		{
			prev = current;
			current = current->next;
		}

		if (prev == NULL)
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		else
		{
			prev->next = new_node;
			new_node->next = current;
		}
	}

	/* Update the sorted linked list */
	if (ht->shead == NULL || strcmp(ht->shead->key, key) > 0)
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
	if (ht->shead != NULL)
	{
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		shash_node_t *current = ht->shead;
	}
	while (current->snext != NULL && strcmp(current->snext->key, key) < 0)
		current = current->snext;
		new_node->sprev = current;
		new_node->snext = current->snext;

		if (current->snext != NULL)
			current->snext->sprev = new_node;

		current->snext = new_node;

	return (1);
}

/**
* shash_table_get - Retrieves the value associated with a key from the sorted hash table.
* @ht: The sorted hash table.
* @key: The key to search for.
* Return: The value associated with the key, or NULL if key not found.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (ht == NULL || key == NULL)
		return (NULL);

	unsigned long int index = hash_djb2(key) % ht->size;
	shash_node_t *current = ht->array[index];

	while (current != NULL && strcmp(current->key, key) <= 0)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}

/**
* shash_table_print - Prints the sorted hash table using the
*			sorted linked list.
* @ht: The sorted hash table.
*/
void shash_table_print(const shash_table_t *ht)
{
	if (ht == NULL)
	{
		printf("NULL sorted hash table\n");
		return;
	}

	printf("{");
	shash_node_t *current = ht->shead;

	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;

		if (current != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
* shash_table_print_rev - Prints the hash table key/value pairs in
*			reverse order using the sorted linked list.
* @ht: The sorted hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	if (ht == NULL)
	{
		printf("NULL sorted hash table\n");
		return;
	}

	printf("{");
	shash_node_t *current = ht->stail;

	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;

		if (current != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
* shash_table_delete - Deletes the sorted hash table.
* @ht: The sorted hash table.
*/
void shash_table_delete(shash_table_t *ht)
{
	if (ht == NULL)
		return;

	shash_node_t *current = ht->shead;
	shash_node_t *next;

	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}

	free(ht->array);
	free(ht);
}
