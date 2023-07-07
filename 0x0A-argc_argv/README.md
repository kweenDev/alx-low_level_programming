# 0x0A - argc, argv
### ALX Low Level Programming

This project contains C programs that demonstrate the usage of `argc` and `argv` in command-line arguments handling. The programs perform various tasks, such as printing the program name, counting the number of arguments, manipulating and performing calculations with the arguments.

## Overview

Command-line arguments allow us to pass information to a program when it is run from the command line or terminal. In the C programming language, `argc` and `argv` are used to handle command-line arguments.

- `argc` stands for "argument count" and represents the number of command-line arguments passed to the program.
- `argv` stands for "argument vector" and is an array of strings that holds the actual arguments passed to the program.

When a program is executed, the first element of `argv` (`argv[0]`) is always the name of the program itself. The following elements (`argv[1]`, `argv[2]`, and so on) contain the additional arguments passed.

## Tasks

1. **Task 0: It ain't what they call you, it's what you answer to**
   - Program: `0-whatsmyname.c`
   - Description: Prints the name of the program.
   
2. **Task 1: Silence is argument carried out by other means**
   - Program: `1-args.c`
   - Description: Prints the number of arguments passed to the program.
   
3. **Task 2: The best argument against democracy is a five-minute conversation with the average voter**
   - Program: `2-args.c`
   - Description: Prints all the arguments passed to the program, each on a new line.
   
4. **Task 3: Neither irony nor sarcasm is argument**
   - Program: `3-mul.c`
   - Description: Multiplies two numbers provided as arguments and prints the result.
   
5. **Task 4: To infinity and beyond**
   - Program: `4-add.c`
   - Description: Adds multiple positive numbers provided as arguments and prints the sum.
   
6. **Task 5 (Advanced): Minimal Number of Coins for Change**
   - Program: `100-change.c`
   - Description: Calculates the minimum number of coins required to make change for a given amount of cents.
   
## Resources

Here are some resources for further reading on command-line arguments and related topics:

- [Command-Line Arguments in C](https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/)
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) (Book by Brian Kernighan and Dennis Ritchie)
- [C Command Line Arguments](https://www.tutorialspoint.com/cprogramming/c_command_line_arguments.htm) (Tutorialspoint)

Feel free to explore these resources to deepen your understanding of command-line arguments and enhance your programming skills.
