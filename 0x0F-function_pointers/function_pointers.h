#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Task 0 */
void print_name(char *name, void (*f)(char *));

/* Task 1 */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Task 2 */
int int_index(int *array, int size, int (*cmp)(int));

/* Task 3 */
/**
* struct op - Structure that holds operator and function
* pointers.
* @op: The operator
* @f: The function associated
*/

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}
op_t;

/* Task 3 - Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* FUNCTION_POINTERS_H */
