# 0x06. C - More Pointers, Arrays, and Strings

This project focuses on deepening your understanding and proficiency in using pointers, arrays, and strings in the C programming language. By completing the tasks in this project, you will gain valuable knowledge and hands-on experience with these fundamental concepts.

## Tasks

This project consists of several tasks, both mandatory and advanced, each focusing on a different aspect of pointers, arrays, and strings. 
Here is a vrief description of each task:

### Mandatory Tasks

#### 0-strcat.c - 0. strcat:
- Write a function that concatenates two strings.
- Prototype: `char *_strcat(char *dest, char *src);`
- This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte.
- Returns a pointer to the resulting string `dest`

#### 1-strncat.c - 1. strncat: 
- Write a function that concatenates two strings.
- Prototype: `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that it will use at at most `n` bytes from `src`, and `src` does not need to be null-terminated if it contains `n` or more bytes.
- Return a pointer to the resulting string `dest`

#### 2-strncpy.c - 2. strncpy:
- Write a function that copies a string.
- Prototype: `char *_strncpy(char *dest, char *src, int n);`
- Your function should work exactly like `strncpy` 

#### 3-strcmp.c - 3. strcmp:
- Write a function that compares two strings. 
- Prototype: `int _strcmp(char *s1, char *s2);`
- Your function should work exactly like `strcmp`

#### 4-rev_array.c - 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy:
- Write a function that reverses the content of an array of integers.
- Prototype: `void reverse_array(int *a, int n);`
- Where `n` is the number of elements of the array

#### 5-string_toupper.c - 5. Always look up:
- Write a function that changes all lowercase letters of a string to uppercase.
- Prototype: `char *string_toupper(char *);`

#### 6-cap_string.c - 6. Expect the best. Prepare for the worst. Capitalize on what comes:
- Write a function that capitalizes all words of a string.
- Prototype: `char *cap_string(char *);`

#### 7-leet.c - 7. Mozart composed his music not for the elite, but for everybody:
- Write a function that encodes a string into `1337`.
- Prototype: `char *leet(char *);`
- You cannot use `switch`/`case` or loops of any kind.

### Advanced Tasks

#### 100-rot13.c - 8. rot13:
- Write a function that encodes a string using `rot13`.
- Prototype: `char *rot13(char *);`
- You can only use `if` statement once in your code.
- You cannot use `switch`/`case` or loops of any kind.

#### 101-print_number.c - 9. Numbers have life; they're not just symbols on paper:
- Write that prints an integer using the `putchar` function
- Prototype: `void print_number(int n);`
- The function should adhere to certain restriction and requirements, printing an integer without using `printf` or `puts`.
- You are not allowed to use `long`, arrays or pointers. 
- You are not allowed to hard-code special values.

#### 102-magic.c - 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work:
- This task requires adding one line of code to an existing program so that it prints `a[2] = 98`.
- The line of code should be added at a specific location and must follow certain constraints.
- Not allowed to use variable `a`, modify the variable `p`, or a `,`.

#### 103-infinite_add.c - 11. It is the addition of strangeness to beauty that constitutes the romantic character in art:
- Write a function that adds two numbers represented as strings and stores the result in a buffer.
- Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`

#### 104-print_buffer.c - 12. Noise is a buffer, more effective than cubicle or booth walls:
- Write a function that prints the content of a buffer.
- Prototype: `void print_buffer(char *b, int size);`
- The function must print the content of `size` bytes of the buffer pointed by `b`
_ The output should display 10 bytes per line.

### Helper Files: 
- `main.h` and `_putchar.c` files provide the essential functionality and declarations that contribute to the overall structure and dunctionality of the program. They play a crucial role in ensuring the smooth execution and readability of the code.

#### main.h:
- This header file contains function prototypes and declarations used in the above files.
- It allows different source files to access and use these definitions without redefining them in each file.

#### _putchar.c: 
- This file provides a custom implementation of the `putchar` function.
- This function is used to print a single character to the standard output.

Feel free to explore these files to learn more about pointers, arrays, and strings in the context of C programming. Each file contains its own implementation and comments to guide you through the code.

Happy coding, and may the vim be with you!

## Resources
- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout](https://www.geeksforgeeks.org/memory-layout-of-c-program/)
- [Understanding Pointers in C](https://www.geeksforgeeks.org/pointers-in-c/)
---

**Author:** [kweenDev](https://github.com/kweenDev)

**GitHub Repository:** []()
