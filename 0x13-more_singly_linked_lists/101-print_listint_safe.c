#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head;
	int loop_flag = 0;

	if (!head)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_flag = 1;
			break;
		}
	}

	if (loop_flag)
	{
		slow = head;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;
			fast = fast->next;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		printf("-> [%p] %d\n", (void *)fast, fast->n);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}

	return (count);
}
