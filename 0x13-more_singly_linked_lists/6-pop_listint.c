#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t list.
* @head: Pointer to a pointer to the head of the list.
*
* Return: The data (n) of the deleted node.
*/
int pop_listint(listint_t **head)
{
	int data;

	if (head && *head)
	{
		data = (*head)->n;
		listint_t *tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (data);
	}
	return (0);
}
