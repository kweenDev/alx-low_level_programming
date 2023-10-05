# More Malloc, Free

This repository contains C programs that demonstrate the usage of `malloc`, `free`, and related memory allocation functions. It covers various tasks related to dynamic memory allocation, string manipulation, and arithmetic operations.

## Table of Contents

- [Tasks](#tasks)
  - [0. Trust no one](#0-trust-no-one)
  - [1. string_nconcat](#1-string_nconcat)
  - [2. calloc](#2-_calloc)
  - [3. array_range](#3-array_range)
  - [4. realloc](#4-_realloc)
  - [5. We must accept finite disappointment, but never lose infinite hope](#5-we-must-accept-finite-disappointment-but-never-lose-infinite-hope)

## Function Prototypes

Here are the function prototypes used in the tasks:

### Task 0: Trust no one - 0-malloc_checked.c

```c
void *malloc_checked(unsigned int b);
```

### Task 1: string_nconcat - 1-string_nconcat.c

```c
char *string_nconcat(char *s1, char *s2, unsigned int n);
```

### Task 2: calloc - 2-calloc.c
```c
void *_calloc(unsigned int nmemb, unsigned int size);
```

### Task 3: array_range - 3-array_range.c
```c
int *array_range(int min, int max);
```

### Task 4: realloc - 100-realloc.c
```c
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
```

### Task 5: - 101-mul.c
Has no given function prototype used, all prototypes used are created for this task.

## Tasks

### Task 0: Trust no one 
Write a function `malloc_checked` that allocates memory using `malloc`. If `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of 98.

### Task 1: string_nconcat
Write a function `string_nconcat` that concatenates two strings. The function should return a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated. If the function fails, it should return `NULL`.

### Task 2: calloc
Write a function `_calloc` that allocates memory for an array using `malloc`. The `_calloc` function should allocate memory for `nmemb` elements of `size` bytes each and return a pointer to the allocated memory. The memory should be set to zero. If `nmemb` or `size` is 0, `_calloc` should return `NULL`. If `malloc` fails, `_calloc` should also return `NULL`.

### Task 3: array_range
Write a function `array_range` that creates an array of integers. The function should return a pointer to the newly created array. The array created should contain all the values from `min` (included) to `max` (included), ordered from min to max. If `min` is greater than `max`, the function should return `NULL`. If `malloc` fails, the function should also return `NULL`.

### Task 4: realloc
Write a function `_realloc` that reallocates a memory block using `malloc` and `free`. The `_realloc` function should reallocate a memory block pointed to by `ptr`, changing the size of the block to `new_size`. The contents of the block will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes. If `new_size` is greater than `old_size`, the "added" memory should not be initialized. If `new_size` is equal to `old_size`, the function should do nothing and return `ptr`. If `ptr` is `NULL`, the function should be equivalent to calling `malloc(new_size)`. If `new_size` is zero and `ptr` is not `NULL`, the function should be equivalent to calling `free(ptr)` and return `NULL`.

### Task 5 We must accept finite disappointment, but nevert lose infinte hope
Write a program that multiplies two positive numbers.
#### Usage 
```bash
./mul num1 num2
```
`num1` and `num2` are positive numbers passed in base 10.
The program will print the result, followed by a new line.
#### Additional Requirements
The number of arguments must be correct; otherwise, the program will print "Error", followed by a new line, and exit with a status of 98.
`num1` and `num2` should only be composed of digits. If not, the program will print "Error", followed by a new line, and exit with a status of 98.
It is allowed to use more than 5 functions in the program.
You can use `bc` (man bc) to check your results.

#### Example:
```bash
$ ./mul 10 98
980
```
In this example, the program multiplies 10 and 98, resulting in 980, which is printed to the console.

Please note that the program follows specific usage and error handling requirements to ensure correct execution and provide meaningful error messages in case of incorrect input.

### Helper file:
main.h is a header file that contains all the function prototypes for this project.

## Usage

To compile the programs, use the following command format:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <source_file.c> -o <output_file>
```
Replace `<source_file.c>` with the name of the C file you want to compile and `<output_file>` with the desired name of the output file.

To run the compiled program, use the following command format:
```bash
./<output_file> <arguments>
```
Replace `<output_file>` with the name of the compiled file and `<arguments>` with the necessary command-line arguments (if any).

## Resources

- [C - Dynamic Memory Allocation](https://www.tutorialspoint.com/cprogramming/c_dynamic_memory_allocation.htm)
- [malloc() function in C/C++](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [Memory Allocation in C - malloc(), calloc(), free() and realloc()](https://www.guru99.com/dynamic-memory-allocation-in-c.html)
- [The C Library Function - realloc()](https://www.tutorialspoint.com/c_standard_library/c_function_realloc.htm)
- [Bash: Display exit status in prompt](https://www.cyberciti.biz/faq/bash-shell-change-the-color-of-my-shell-prompt-under-linux-or-unix/)
