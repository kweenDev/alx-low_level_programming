/* 8-delete_dnodeint.c */

#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index in a
*				doubly linked list
* @head: Pointer to the address of the head of the doubly linked list
* @index: Index of the node to be deleted (starting from 0)
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = current;

	free(temp);

	return (1);
}
