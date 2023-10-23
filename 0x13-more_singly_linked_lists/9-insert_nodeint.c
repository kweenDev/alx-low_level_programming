#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position
*				in a listint_t list.
* @head: A pointer to a pointer to the head of the list.
* @idx: The index of the new node to be inserted (starting from 0).
* @n: The integer to be added as the value of the new node.
*
* Return: The address of the new element or NULL if it fails.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_node = *head;
	listint_t *new_node;
	unsigned int index;
	unsigned int cont = 0;

	/* create node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	/* search of position to insert */
	index = idx - 1;
	while (aux_node && cont != index)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* general case */
	if (cont == index && aux_node)
	{
		new_node->next = aux_node->next;
		aux_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
