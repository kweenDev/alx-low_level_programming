# C - 0x0F-function_pointers
### Function Pointers Project

This project contains multiple C source files that demonstrate the usage of function pointers. It includes functions that work with arrays, function pointers, and arithmetic operations.

## Table of Contents

1. [Introduction to Function Pointers](#introduction-to-function-pointers)
2. [File Descriptions](#file-descriptions)
3. [How to Use](#how-to-use)
4. [Compilation](#compilation)
5. [Contributing](#contributing)
6. [License](#license)

## Introduction to Function Pointers

Function pointers are pointers that point to the address of functions. They allow us to call functions indirectly by referring to the function's address. Function pointers are useful in situations where we want to pass functions as arguments to other functions or store different functions in an array or structure.

This project explores the concept of function pointers through a series of tasks that demonstrate various use cases.

## File Descriptions

1. **function_pointers.h**: Header file that contains all the function prototypes used in the project.

2. **0-main.c**: Demonstrates the usage of function pointers to print a name using different print formats.

3. **1-main.c**: Illustrates how to execute a function on each element of an array using function pointers.

4. **2-main.c**: Implements a function that searches for an integer in an array using a comparison function pointer.

5. **3-calc.h**: Contains the function prototypes and a data structure for arithmetic operations using function pointers.

6. **3-op_functions.c**: Implements arithmetic functions: addition, subtraction, multiplication, division, and modulo.

7. **3-get_op_func.c**: Implements a function that selects the correct arithmetic function based on the operator.

8. **3-main.c**: Demonstrates the use of arithmetic functions with command-line arguments.

9. **100-main_opcodes.c**: Prints the opcodes of its own main function using function pointers.

## How to Use

To use this project, you can clone the repository and compile the source files using a C compiler (e.g., GCC).

## Compilation

To compile the files, you can use the following commands:

```bash
gcc -Wall -Werror -Wextra -pedantic -o task_0 0-main.c
gcc -Wall -Werror -Wextra -pedantic -o task_1 1-main.c
gcc -Wall -Werror -Wextra -pedantic -o task_2 2-main.c
gcc -Wall -Werror -Wextra -pedantic -o task_3 3-main.c 3-op_functions.c 3-get_op_func.c
gcc -Wall -Werror -Wextra -pedantic -o opcode_printer 100-main_opcodes.c
```
Replace `task_0`, `task_1`, etc. with appropriate names for each compiled file.

_This project is part of the ALX Software Engineering program._
