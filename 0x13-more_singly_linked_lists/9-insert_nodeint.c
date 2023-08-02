#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position
* in a listint_t list.
* @head: Pointer to a pointer to the head of the list.
* @idx: Index of the new node to be inserted (starting from 0).
* @n: Integer to be added as the value of the new node.
*
* Return: Address of the new element or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *prev_node = NULL, *current_node = *head;

	if (idx == 0)
		return (add_nodeint(head, n));

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;

		while (current_node && i < idx)
		{
			prev_node = current_node;
			current_node = current_node->next;
			i++;
		}

		if (i == idx)
		{
			new_node->next = current_node;
			prev_node->next = new_node;
			return (new_node);
		}

		free(new_node);
	}
	return (NULL);
}
