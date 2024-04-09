# Project: 0x1C - C Makefiles

---

## Table of Contents

1. [Description](#description)
2. [Tasks](#tasks)
    - [Task 0: Creating the First Makefile](#task-0)
    - [Task 1: Creating a Makefile with Compiler and Source File Variables](#task-1)
    - [Task 2: Creating a Useful Makefile with Object Files](#task-2)
    - [Task 3: Makefile with Cleaning and Recompilation Rules](#task-3)
    - [Task 4: Complete Makefile with Compiler Flags](#task-4)
    - [Task 5: Implementing Island Perimeter in Python](#task-5)
    - [Task 6: Advanced Makefile with Specific Rules](#task-6)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Credits](#credits)

---

## Description<a name="description"></a>

This project focuses on understanding and creating Makefiles, a tool used in programming to automate the building of executable programs from source code. The tasks cover basic to advanced concepts of Makefiles, including rules, variables, cleaning, and recompilation.

---

## Tasks<a name="tasks"></a>

### Task 0: Creating the First Makefile<a name="task-0"></a>

- **Executable Name:** school
- **Rule:** all

### Task 1: Creating a Makefile with Compiler and Source File Variables<a name="task-1"></a>

- **Executable Name:** school
- **Rule:** all
- **Variables:** CC, SRC

### Task 2: Creating a Useful Makefile with Object Files<a name="task-2"></a>

- **Executable Name:** school
- **Rule:** all
- **Variables:** CC, SRC, OBJ, NAME
- **Note:** The Makefile should recompile only updated source files.

### Task 3: Makefile with Cleaning and Recompilation Rules<a name="task-3"></a>

- **Executable Name:** school
- **Rules:** all, clean, oclean, fclean, re
- **Variables:** CC, SRC, OBJ, NAME, RM
- **Note:** Cleaning rules should not fail.

### Task 4: Complete Makefile with Compiler Flags<a name="task-4"></a>

- **Executable Name:** school
- **Rules:** all, clean, fclean, oclean, re
- **Variables:** CC, SRC, OBJ, NAME, RM, CFLAGS
- **Note:** Compiler flags should be set, and cleaning rules should use $(RM).

### Task 5: Implementing Island Perimeter in Python<a name="task-5"></a>

- **Function:** def island_perimeter(grid)
- **Requirements:** Refer to the provided Python code for details.

### Task 6: Advanced Makefile with Specific Rules<a name="task-6"></a>

- **Executable Name:** school
- **Rules:** all, clean, fclean, oclean, re
- **Variables:** CC, SRC, OBJ, NAME, RM, CFLAGS
- **Specific Requirements:** Refer to the provided task details.

---

## Installation<a name="installation"></a>

1. Clone the repository: `git clone https://github.com/your_username/0x1C-makefiles.git`
2. Navigate to the project directory: `cd 0x1C-makefiles`

---

## Usage<a name="usage"></a>

1. For each task, navigate to the task-specific directory (e.g., `cd Task_0`).
2. Use the provided Makefile with the appropriate command (e.g., `make -f 0-Makefile`).

---

## Credits<a name="credits"></a>

This project is part of the ALX Software Engineering program.

---
_kweenDev_
(Refiloe Radebe)
