#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;

/* Task 0 */
size_t print_list(const list_t *h);

/* Task 1 */
size_t list_len(const list_t *h);

/* Task 2 */
list_t *add_node(list_t **head, const char *str);

/* Task 3 */
list_t *add_node_end(list_t **head, const char *str);

/* Task 4 */
void free_list(list_t *head);

/* Task 5 */
void before_main(void) __attribute__((constructor));

/* Task 6 - Assembly function */
int printf(const char *format, ...);

#endif /* LISTS_H */
