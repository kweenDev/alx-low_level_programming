#include "lists.h"

/**
* print_list - This function prints all the elements of a singly
*		linked list.
* @h: A pointer to the head of the linked list.
*
* Return: The number of nodes in the linked list. If str is NULL,
*		prints [0] (nil), else prints [len] str.
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;

	}

	return (count);
}
