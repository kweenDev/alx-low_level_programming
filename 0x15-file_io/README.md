# File I/O Tasks

This repository contains C programs that demonstrate various file I/O operations and functionalities. Each task is implemented in a separate C file, and the compilation commands are provided for your convenience.

## Tasks Overview

### Task 0: Tread Lightly
Implement a function that reads a text file and prints it to the standard output. The program takes a filename and the number of letters to read and print.

### Task 1: Under the Snow
Create a function that creates a file and writes the given text content to it. The program should handle cases like existing files and NULL inputs.

### Task 2: Speak Gently
Write a function that appends text to the end of a file. The program should handle cases like existing files and NULL inputs.

### Task 3: cp
Implement a program that copies the content of one file to another. The program should handle various error scenarios and follow specified requirements.

### Task 4: ELF Header
Write a program that displays information from the ELF header of an ELF file. The program should provide details about the file's magic, class, data, version, OS/ABI, type, entry point address, and more.

## Compilation and Usage

To compile the programs, use the provided `gcc` commands:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-read_textfile.c -o read_textfile
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-create_file.c -o create_file
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-append_text_to_file.c -o append_text_to_file
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-cp.c -o cp
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 100-elf_header.c -o elf_header
```
Replace the source and output filenames accordingly.

For each program, run it with appropriate command-line arguments to test its functionality.

## Notes
- The programs follow strict requirements and avoid the use of certain functions to fulfill project constraints.
- Pay attention to error handling and input validation in the programs.

_This project has been completed by kweenDev as part of the ALX Software Engineering course._
