#include "lists.h"

/**
* add_node_end - This function adds a new node at the
*		end of a singly linked list.
* @head: A double pointer to the head of the linked list.
* @str: The content of the new node (string).
*
* Return: The address of the new node, or NULL if malloc fail.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
