#include "lists.h"

/**
* list_len - This function returns the number of elements in a
*		singly linked list (list_t).
* @h: A pointer to the head of the linked list (list_t).
*
* Return: The number of nodes in the linked list.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
