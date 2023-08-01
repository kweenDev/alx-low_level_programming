#include <stdlib.h>
#include "lists.h"

/**
* free_list - This function frees a singly linked list and
* the memory allocated for its nodes.
* @head: A pointer to the head of the linked list.
* The str member of each node is freed before freeing the node itself.
*/
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
