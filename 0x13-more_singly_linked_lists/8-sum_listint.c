#include "lists.h"

/**
* sum_listint - Returns the sum of all the data (n) of a listint_t list.
* @head: Pointer to the head of the list.
*
* Return: The sum of all integers in the list.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
