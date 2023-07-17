# 0x0E-structures_typedef

## Structs and Typedef

This project contains several C files that demonstrate the usage of structs and typedef in the C programming language. It includes functions to initialize, print, create, and free a dog structure. The project aims to help understand how to work with structures and typedef in C.

## Files

- `dog.h`: Header file that contains the definition of the dog structure and function prototypes.
- `1-init_dog.c`: Source file that defines the `init_dog` function to initialize a dog structure with given values.
- `2-print_dog.c`: Source file that defines the `print_dog` function to print the contents of a dog structure.
- `3-main.c`: Main file that demonstrates the usage of the typedef `dog_t` to create and print a dog structure.
- `4-new_dog.c`: Source file that defines the `new_dog` function to create a new dog structure dynamically.
- `5-free_dog.c`: Source file that defines the `free_dog` function to free the memory allocated for a dog structure.

## Compilation

To compile the files and create the executable, use the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o dog
```

## Usage

Run the compiled executable `dog` to see the output of the different scenarios:
```bash
./dog
```
## Example
```shell
My name is Poppy, and I am 3.5 :) - Woof!
```


### Authors

- This project was created by kweenDev as part of the ALX Software Engineering programme. Feel free to reach out if you have any questions or feedback.
