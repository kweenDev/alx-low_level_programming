# 0x18. C - Dynamic libraries

## Overview

This project involves dynamic libraries, scripting, and code injection to potentially win the Giga Millions jackpot. The tasks are designed to enhance your understanding of C programming, dynamic libraries, and practical applications of code injection.
This project focuses on dynamic libraries in C, covering their creation, usage, and related tasks. Here's a brief description of each script:

## Tasks

### Task 0: Dynamic Library Creation

- **Description:** Create the dynamic library containing specified C functions. A `main.h` file with prototypes is provided.
- Compile a set of C functions into a dynamic library (`libdynamic.so`).
- Verify the presence of functions using `nm -D libdynamic.so`.
- Test the library using a sample program.

### Task 1: Script for Dynamic Library Creation

- **Description:** Automates the creation of a dynamic library (`liball.so`) from all `.c` files in the current directory.
- Create a script (`1-create_dynamic_lib.sh`) to automate the compilation of a dynamic library (`liball.so`) from multiple `.c` files.

### Task 2: Python Interaction with C Functions

- **Description:** Develop a dynamic library (`100-operations.so`) with C functions callable from Python. A Python script (`100-tests.py`) demonstrates interaction using `ctypes`.
- Implement C functions in a shared library (`100-operations.so`).
- Write a Python script (`100-tests.py`) to call C functions from Python using `ctypes`.
- Test the Python script to ensure successful interaction.

### Task 3: Code Injection

- **Description:** Implements code injection using `LD_PRELOAD` to potentially win the Giga Millions jackpot. The script is executed 98 seconds before running the Giga Millions program.
- Develop a shell script (`101-make_me_win.sh`) for code injection using `LD_PRELOAD`.
- Attempt to manipulate the behavior of the Giga Millions program to win the jackpot.

## Files

- `libdynamic.so`: Dynamic library containing C functions.
- `1-create_dynamic_lib.sh`: Script for dynamic library creation.
- `100-operations.so`: Shared library for Python-C interaction.
- `100-tests.py`: Python script for testing C functions.
- `101-make_me_win.sh`: Shell script for code injection.

## Usage

1. Compile the dynamic libraries using the provided scripts.
2. Test the libraries and scripts to ensure correctness.
3. Run the code injection script as instructed for a chance to win the Giga Millions jackpot.

This project has been created as part of the ALX SE program by Refiloe Radebe.
