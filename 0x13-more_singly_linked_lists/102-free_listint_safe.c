#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: A pointer to a pointer to the head node of the linked list.
*
* Description: This function frees a listint_t linked list safely to
*		avoid memory leaks. It goes through the list only
*		once and sets the head to NULL after freeing.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t count = 0;
	listint_t *temp;
	listint_t *freed_nodes[1024]; /* Array to store freed nodes */

	size_t i;

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current == freed_nodes[i])
			{
				*h = NULL; /* Set head to NULL before returning */
				return (count); /* Detected a loop, exit */
			}
		}

		temp = current;
		current = current->next;
		freed_nodes[count] = temp;
		free(temp);
		count++;
	}

	*h = NULL; /* Set head to NULL after freeing all nodes */
	return (count);
}
