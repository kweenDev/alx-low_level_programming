##Debugging
This repository contains solutions to debugging tasks in C programming language. The tasks focus on manual debugging techniques and understanding error messages.

##General
Debugging is the process of identifying and resolving errors, also known as bugs, in software code. It involves analyzing the code to locate the cause of unexpected behavior or program crashes and then making the necessary corrections to fix the issues.

##Methods of debugging manually include:

1. Print Statements: Adding print statements to the code at strategic locations to track the flow of execution, variable values, and identify potential issues.
2. Code Review: Reviewing the code line by line to check for logic errors, incorrect syntax, or any other mistakes.
3. Debugging Tools: Utilizing debugging tools such as gdb (GNU Debugger) or built-in debuggers in integrated development environments (IDEs) to step through the code, set breakpoints, inspect variables, and analyze the program's behavior.
When encountering errors during the debugging process, error messages can provide valuable information to identify the problem. Some tips for reading error messages effectively are:

4. Identify the Error Type: Determine whether it is a syntax error, runtime error, or logical error. Understanding the error type helps narrow down the possible causes.
5. Read the Error Message: Carefully read the error message, including the line number and description of the error. It may indicate the source of the issue or provide clues about what went wrong.
6. Check for Stack Trace: If the error message includes a stack trace, examine it to trace the sequence of function calls and identify the point of failure.
7. Look for Relevant Information: Pay attention to any additional information provided in the error message, such as variable values, unexpected behavior, or error codes. They can aid in pinpointing the problem.

##Tasks:

0. Multiple mains: 
[0-main.c] (https://github.com/kweenDev/alx-low_level_programming/blob/main/0x03-debugging/0-main.c) 
[main.h] (https://github.com/kweenDev/alx-low_level_programming/blob/main/0x03-debugging/main.h)
- Create a file named `0-main.c` that tests the `positive_or_negative()` function with a case of `0`. Compile it with the provided `positive_or_negative.c` and `main.h` files.

1. Like, comment, subscribe:
[1-main.c] (https://github.com/kweenDev/alx-low_level_programming/blob/main/0x03-debugging/1-main.c)
- Comment out the code causing an infinite loop in the given 1-main.c file. The program should output a message indicating the avoidance of an infinite loop.

2. 0 > 972?
[2-largest_number.c] (https://github.com/kweenDev/alx-low_level_programming/blob/main/0x03-debugging/2-largest_number.c)
[main.h] (https://github.com/kweenDev/alx-low_level_programming/blob/main/0x03-debugging/main.h)
- Fix the code in `2-largest_number.c` so that it correctly prints the largest of three integers.

3. Leap year
[3-print_remaining_days.c] (https://github.com/kweenDev/alx-low_level_programming/blob/main/0x03-debugging/3-print_remaining_days.c)
[main.h] (https://github.com/kweenDev/alx-low_level_programming/blob/main/0x03-debugging/main.h)
- Fix the `print_remaining_days()` function in `3-print_remaining_days.c` to handle leap years correctly and provide accurate output for all valid dates.
