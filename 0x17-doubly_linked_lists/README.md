# 0x17. Doubly Linked Lists

## Description
This repository contains C programs that implement various functions related to doubly linked lists. Each task is designed to reinforce your understanding of linked list manipulation in the C programming language.

## Project Structure

The project is organized as follows:

- **Files:** The C source code files for each task are located in the `0x17-doubly_linked_lists` directory.
- **Header File:** The header file `lists.h` contains the function prototypes used throughout the project.
- **Compilation:** The C files can be compiled using the provided `gcc` commands in each task's description.

## Tasks

### 0. Print list
- **File:** `0-print_dlistint.c`
- **Description:** This function prints all the elements of a `dlistint_t` list.
- **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
- **Return:** The number of nodes.

### 1. List length
- **File:** `1-dlistint_len.c`
- **Description:** This function returns the number of elements in a linked `dlistint_t` list.
- **Prototype:** `size_t dlistint_len(const dlistint_t *h);`

### 2. Add node
- **File:** `2-add_dnodeint.c`
- **Description:** This function adds a new node at the beginning of a `dlistint_t` list.
- **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`

### 3. Add node at the end
- **File:** `3-add_dnodeint_end.c`
- **Description:** This function adds a new node at the end of a `dlistint_t` list.
- **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`

### 4. Free list
- **File:** `4-free_dlistint.c`
- **Description:** This function frees a `dlistint_t` list.
- **Prototype:** `void free_dlistint(dlistint_t *head);`

### 5. Get node at index
- **File:** `5-get_dnodeint.c`
- **Description:** This function returns the nth node of a `dlistint_t` linked list.
- **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`

### 6. Sum list
- **File:** `6-sum_dlistint.c`
- **Description:** This function returns the sum of all the data (n) of a `dlistint_t` linked list.
- **Prototype:** `int sum_dlistint(dlistint_t *head);`

### 7. Insert at index
- **File:** `7-insert_dnodeint.c`
- **Description:** This function inserts a new node at a given position in a `dlistint_t` list.
- **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`

### 8. Delete at index
- **File:** `8-delete_dnodeint.c`
- **Description:** This function deletes the node at the specified index of a `dlistint_t` linked list.
- **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`

### 9. Crackme4
- **File:** `100-password`
- **Description:** Find the password for `crackme4` and save it in this file.

### 10. Palindromes
- **File:** `102-result`
- **Description:** Find the largest palindrome made from the product of two 3-digit numbers and save the result in this file.

### 11. Crackme5
- **Files:** `103-keygen.c`
- **Description:** Write a keygen for `crackme5`. Generate a valid key for a given username.

## Usage
Compile each C file individually using the provided `gcc` commands. Execute the resulting programs to test the implemented functions.

Example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
./a
```

Author
Refiloe Radebe
