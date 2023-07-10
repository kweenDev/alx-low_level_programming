# 0X0B. C - malloc, free

## Project Description
This project focuses on dynamic memory allocation in the C programming language. It covers the concepts of `malloc()`, `free()`, and related functions, and demonstrates their usage through various examples. The project also includes functions to create arrays, duplicate strings, concatenate strings, allocate 2-dimensional grids, and split strings into words.

## Table of Contents
- [Project Title: Memory Allocation](#project-title-memory-allocation)
- [Project Description](#project-description)
- [Table of Contents](#table-of-contents)
- [Files](#files)
- [Functions](#functions)
  - [1. create_array](#1-create_array)
  - [2. strdup](#2-_strdup)
  - [3. str_concat](#3-str_concat)
  - [4. alloc_grid](#4-alloc_grid)
  - [5. free_grid](#5-free_grid)
  - [6. argstostr](#6-argstostr)
  - [7. strtow](#7-strtow)
- [Usage](#usage)
- [Contributing](#contributing)

## Files
- `0-create_array.c`: 
Contains the function `create_array` that creates an array of characters and initializes it with a specific character.
- `1-strdup.c`: 
Contains the function `_strdup` that duplicates a string.
- `2-str_concat.c`: 
Contains the function `str_concat` that concatenates two strings.
- `3-alloc_grid.c`: 
Contains the function `alloc_grid` that creates a 2-dimensional array of integers.
- `4-free_grid.c`: 
Contains the function `free_grid` that frees a 2-dimensional grid previously created by `alloc_grid`.
- `100-argstostr.c`: 
Contains the function `argstostr` that concatenates all the arguments of the program.
- `101-strtow.c`: 
Contains the function `strtow` that splits a string into words.
- `main.h`: 
Contains the function prototypes for this project.

## Functions

### 1. create_array
```c
char *create_array(unsigned int size, char c);
```
- This function creates an array of characters and initializes it with a specific character.
##### Parameters:
- `size`: The size of the array to be created.
- `c`: The character used to initialize the array elements.
##### Returns:
- If `size` is 0, returns `NULL`.
- If memory allocation fails, returns `NULL`.
- Otherwise, returns a pointer to the created array.

### 2. strdup
```c
char *_strdup(char *str);
```
- This function duplicates a string.
##### Parameters:
- `str`: The string to be duplicated.
##### Returns:
- If `str` is `NULL` or memory allocation fails, returns `NULL`.
- Otherwise, returns a pointer to the duplicated string.

### 3. str_concat
```c
char *str_concat(char *s1, char *s2);
```
- This function concatenates two strings.
##### Parameters:
- `s1`: The first string.
- `s2`: The second string.
##### Returns:
- If `s1` and `s2` are `NULL` or memory allocation fails, returns `NULL`.
- Otherwise, returns a pointer to the concatenated string.

### 4. alloc_grid
```c
int **alloc_grid(int width, int height);
```
- This function creates a 2-dimensional grid of integers.
##### Parameters:
- `width`: The width of the grid (number of columns).
- `height`: The height of the grid (number of rows).
##### Returns:
- If `width` or `height` is 0 or negative, returns `NULL`.
- If memory allocation fails, returns `NULL`.
- Otherwise, returns a pointer to the created grid.

### 5. free_grid
```c
void free_grid(int **grid, int height);
```
- This function frees a 2-dimensional grid previously created by `alloc_grid`.
##### Parameters:
- `grid`: The grid to be freed.
- `height`: The height of the grid (number of rows).

### 6 argstostr
```c
char *argstostr(int ac, char **av);
```
- This function concatenates all the arguments of the program.
##### Parameters:
- `ac`: The number of arguments.
- `av`: An array of strings containing the arguments.
##### Returns:
- If `ac` is 0 or `av` is `NULL`, returns `NULL`.
- If memory allocation fails, returns `NULL`.
- Otherwise, returns a pointer to the concatenated string.

### 7. strtow
```c
char **strtow(char *str);
```
- This function splits a string into words.
##### Parameters:
- `str`: The string to be split.
##### Returns:
- If `str` is `NULL` or an empty string, returns `NULL`.
- If memory allocation fails, returns `NULL`.
- Otherwise, returns a pointer to an array of strings (words). The last element of the array is `NULL`.


## Usage
To use these functions, follow these steps:

1. Clone the repository:
```bash
git clone https://github.com/your-username/alx-low_level_programming.git
```
2. Navigate to the project directory:
```bash
cd alx-low_level_programming/0x0B-malloc_free
```
3. Compile the source code files:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o program_name
```
_Replace `program_name` with the desired name of the executable._
4. Run the program:
```bash
./program_name
```
Follow the prompts or examine the code to understand the functionality of each function.

## Contributing
Pull requests are welcome! For major changes, please open an issue first to discuss what you would like to change.
1. Fork the project.
2. Create your feature branch:
```bash
git checkout -b my-feature-branch
```
3. Commit your changes:
```bash
git commit -am 'Add some feature'
```
4. Push to the branch:
```bash
git push origin my-feature-branch
```
5. Open a pull request explaining the changes and enhancements you've made.
