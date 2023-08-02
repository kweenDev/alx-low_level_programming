#include "lists.h"

/**
* print_list - Print list nodes until a specified node is reached.
* @head: Pointer to the head of the list.
* @end: Pointer to the end node of the list.
*
* Return: The number of nodes printed.
*/
size_t print_list(const listint_t *head, const listint_t *end)
{
	size_t count = 0;

	while (head != end)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	printf("[%p] %d\n", (void *)head, head->n);
	count++;
	return (count);
}

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	int loop_flag = 0;
	size_t count;

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
		count = print_list(slow, fast);
		printf("-> [%p] %d\n", (void *)fast, fast->n);
		return (count + 1);
	}
	else
	{
		count = print_list(head, NULL);
		return (count);
	}
}
