#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: A pointer to a pointer to the head of the list.
* @n: The integer to be added as the value of the new node.
*
* Return: Address of the new element or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (last->next)
				last = last->next;
			last->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
