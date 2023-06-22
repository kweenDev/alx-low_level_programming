# 0x04. C - More functions, more nested loops

This project focuses on further developing your understanding and skills in C programming by working with more functions and nested loops. 
It covers various tasks that involve checking characters, performing mathematical operations, and printing patterns using loops.

## Learning Objectives
By the end of this project, you will understand:
* What are nested loops and how to use them
* What a function is and how to use it
* The difference between a declaration and a definition of a function
* What a prototype is
* Scope of variables
* The purpose of gcc flags: `-Wall` `-Werror` `-pedantic` `-Wextra` and `-std=gnu89`
* What a header file is and how to use it using `#include`

## Tasks

Below are the tasks that are included in this project:

### 0. isupper
- Write a function that checks for an uppercase character.
	* Prototype `int_isupper(int c);`
	* Returns 1 if `c` is uppercase
	* Returns 0 otherwise

### 1. isdigit
- Write a function that checks for a digit (0 through 9).
	* Prototype: `int_isdigit(int c);`
	* Returns 1 if `c` is a digit
	* Returns 0 otherwise

### 2. Collaboration is multiplication
- Write a function that multiplies two integers
	* Prototype: `int mul(int a, int b);`

### 3. The numbers speak for themselves
- Write a function that prints the numbers from 0 to 9, followed by a new line.
	* Prototype: `void print_numbers(void);`
	* Use `_putchar` function only twice

### 4. I believe in numbers and signs
- Write a function that prints the numbers from 0 to 9, followed by a new line.
	* Prototype: `void print_most_numbers(void);`
	* Do not print 2 and 4
	* Use `_putchar` function only twice

### 5. Numbers constitute the only universal language
- Write a function that prints 10 times the numbers from 0 to 14, followed by a new line.
	* Prototype: `void more_more_numbers(void);`
	* Use `_putchar` function only three times

### 6. The shortest distance between two points is a straight line
- Write a function that draws a straight line in the terminal.
	* Prototype: `void print_line(int n);`
	* Use `_putchar` function only

### 7. I feel like I am diagonally parked in a parallel universe
- Write a function that draws a diagonal line on the terminal.
	* Prototype: `void print_diagonal(int n);`
	* Use `_putchar` function only
	* Where `n` is the number of times the character `\` should be printed

### 8. You are so much sunshine in every square inch
- Write a function that prints a square, followed by a new line.
	* Prototype: `void print_square(int size);`
	* Use `_putchar` function only
	* Where `size` is the size of the square

### 9. Fizz-Buzz
- Write a program that prints the numbers from 1 to 100, followed by a new line.
- But for multiples of three, print `Fizz` instead of the number, and for the multiples of five, print `Buzz`.
- For numbers which are multiples of bothe three and five, print `FizzBuzz`.
	* Each number or word should be separated by a space
	* You are allowed to use the standard library

### 10. Triangles
- Write a function that prints a triangle, followed by a new line.
	* Prototype: `void print_triangle(int size);`
	* Only use `_putchar` function to print
	* Where `size` is the size of the triangle
	* If `size` is `0` or less, the function should print only a new line
	* Use the character `#` to print the triangle

### 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known
### to be one of the most important and useful in arithmetic
- Write a program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.
	* You are allowed to use the standard library
	* Your program will be compiled with this command:
<pre>
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
```
</pre>

### 12. Numbers have life; they're not just symbols on paper
- Write a function that prints an integer.
	* Prototype: `void print_number(int n);`
	* Can only use `_putchar` function to print
	* Not allowed to use `long`
	* Not allowed to use arrays or pointers
	* Not allowed to hard-code special values

## Compilation and Usage
To compile the C files in this project, you can use the following command:
<pre>
```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o executable_name
```
</pre>
- Replace `executable_name` with your preferred name for the executable file.

To run the compiled program, use the following command:
<pre>
```bash
./executable_name
```
</pre>

kweenDev
