#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - This function adds a new node at the
* beginning of a singly linked list (list_t).
* @head: A double pointer to the head of the linked list.
* @str: The content of the new node (string).
*
* Return: The address of the new node or NULL if it failed
* to allocate memory.
* The content of the new node (str) is duplicated using strdup().
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
