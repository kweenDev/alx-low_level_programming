# 0x09-static_libraries Project

This project focuses on static libraries in C programming. It includes the creation of a static library and demonstrates how to use it in a program.

## Table of Contents
- [Introduction](#introduction)
- [Files](#files)
- [Usage](#usage)
- [Resources](#resources)

## Introduction 
A static library, also known as an archive, is a collection of precompiled object files that are combined into a single file. It contains reusable functions and symbols that can be linked with a program at compile-time. Static libraries provide a way to package and distribute code for reuse, allowing developers to share and use common functionality across multiple projects.

## Files
The project includes the following files:
- `main.h`: Header file containing the function prototypes for the library.
- `libmy.a`: Static library file containing the compiled object files of various functions.
- `create_static_lib.sh`: Script is designed to compile all the `.c` files using the `gcc` compiler. It then uses the `ar` command to combine these object files into a single static library file (`.a`file).

## Usage
To create the static library `libmy.a`, run the script `create_static_lib.sh`. This script compiles all the `.c` filesin the current directory into object files and then combines them into the library using the `ar` command.

To use the static library in a program, you need to include the header file `main.h` and link the library using the `-l` flag followed by the library name during the compilation.

Here's an example of how to compile a program `example.c` using the `libmy.a` library:

```bash
gcc example.c -L. -lmy -o example
```

## Resources

Here are some resorces for further reading on static libraries:

- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)

- [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)

- [Using A "C" Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).

- [Static Libraries](https://en.wikipedia.org/wiki/Static_library)

- [Creating and Using Static Libraries in C](https://www.geeksforgeeks.org/creating-a-static-library-in-c/)

- [Static Libraries in C](https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_C_libraries.html)

##### All files in this repository have been made executables as per the instructions.
