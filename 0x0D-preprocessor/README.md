# 0x0D-preprocessors

## Description
This project explores the concept of preprocessors in the C programming language. It covers various aspects related to preprocessors, including object-like macros, function-like macros, predefined macros, preprocessor directives, and include guards.

## Files
Below is a brief description of each file included in this project:

### 0-object_like_macro.h
This file defines a macro named `SIZE` as an abbreviation for the token `1024`. It demonstrates the usage of object-like macros.

### 1-pi.h
This file defines a macro named `PI` as an abbreviation for the token `3.14159265359`. It showcases the application of object-like macros.

### 2-main.c
This file contains a program that prints the name of the file it was compiled from. It demonstrates the utilization of the predefined macro `__FILE__`.

### 3-function_like_macro.h
This file defines a function-like macro named `ABS(x)` that computes the absolute value of a number `x`. It illustrates the creation and use of function-like macros.

### 4-sum.h
This file defines a function-like macro named `SUM(x, y)` that computes the sum of two numbers `x` and `y`. It provides another example of a function-like macro.

## Getting Started
To get started with this project, follow the steps below:

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Compile the source code files using a C compiler, such as gcc.
4. Run the resulting executable files to observe the output.

For instance, to compile and run the first task, you can utilize the following commands:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c -o a
```
```bash
./a
```


Repeat the same steps for the other tasks, replacing the file names and executable names accordingly.

## Author
This project was created by kweenDev as part of the ALX Software Engineering curriculum. Feel free to reach out if you have any questions or feedback.
