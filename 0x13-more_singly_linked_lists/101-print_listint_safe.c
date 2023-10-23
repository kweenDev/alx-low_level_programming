#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: A pointer to the head node of the linked list.
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	const listint_t *seen_nodes[1024]; /* Array to store seen nodes */

	size_t i; /* Declare variable at the top */

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current == seen_nodes[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count); /* Detected a loop, exit */
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);
		seen_nodes[count] = current;
		count++;
		current = current->next;
	}

	return (count);
}
