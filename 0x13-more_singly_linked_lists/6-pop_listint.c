#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t list.
* @head: A pointer to a pointer to the head of the list.
*
* Return: The data (n) of the deleted node.
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (head && *head)
	{
		data = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (data);
	}
	return (0);
}
