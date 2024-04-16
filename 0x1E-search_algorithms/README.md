# Project Title: Search Algorithms in C

## Introduction
This project is focused on implementing various search algorithms using the C programming language. The main objective is to gain a deeper understanding of different search techniques and analyze their time and space complexities.

## Algorithms Implemented
1. Linear Search
2. Binary Search
3. Jump Search
4. Interpolation Search
5. Exponential Search
6. Advanced Binary Search
7. Jump Search in a Singly Linked List
8. Linear Search in a Skip List

## Requirements
- Development Environment: Ubuntu 20.04 LTS
- Compiler: gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- Editors: vi, vim, emacs
- Coding Style: Follow the Betty style guidelines
- Libraries: Standard C libraries only, except math.h for specific algorithms

## Files Included
The project includes the following files:
- search_algos.h: Header file containing function prototypes and data structures
- 0-linear.c: Implementation of Linear Search algorithm
- 1-binary.c: Implementation of Binary Search algorithm
- 2-jump.c: Implementation of Jump Search algorithm
- 3-interpolation.c: Implementation of Interpolation Search algorithm
- 4-exponential.c: Implementation of Exponential Search algorithm
- 5-advanced_binary.c: Implementation of Advanced Binary Search algorithm
- 6-linear_skip.c: Implementation of Linear Search in a Skip List algorithm
- main.c: Example main files for testing each algorithm

## Compilation and Testing
To compile each algorithm, use the following command format:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c <algorithm_file.c> -o <executable_name>
```
Replace `<algorithm_file.c>` with the specific algorithm file and `<executable_name>` with your desired executable name.

To test each algorithm, run the respective executable:
```bash
./<executable_name>
```

## Learning Objectives
By completing this project, you should be able to:
- Understand various search algorithms and their time complexities
- Evaluate and compare the performance of different search techniques
- Implement search algorithms effectively in the C programming language

_This project has been completed as part of the ALX Software Engineering program by Refiloe Radebe._
