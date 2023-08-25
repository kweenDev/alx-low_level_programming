#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Task 0: Tread lightly, she is near */
ssize_t read_textfile(const char *filename, size_t letters);

/* Task 1: Under the snow */
int create_file(const char *filename, char *text_content);

/* Task 2: Speak gently, she can hear */
int append_text_to_file(const char *filename, char *text_content);

/* Task 3: cp */
void handle_error_reading(const char *filename);
int open_and_create(const char *filename);
void handle_error_writing(int file_from, const char *filename);

#endif /* MAIN_H */
