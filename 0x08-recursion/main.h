#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _putchar(char c);

/* 0-puts_recursion.c */
void _puts_recursion(char *s);

/* 1-print_rev_recursion.c */
void _print_rev_recursion(char *s);

/* 2-strlen_recurson.c */
int _strlen_recursion(char *s);

/* 3-factorial.c */
int factorial(int n);

/* 4-pow_recursion.c */
int _pow_recursion(int x, int y);

/* 5-sqrt_recursion.c */
int _sqrt_recursion(int n);
int actual_sqrt_recursion(int n, int i);

/* 6-is_prime_number.c */
int is_prime_number(int n);
int actual_prime(int n, int i);

/* 100-is_palindrome.c */
int is_palindrome(char *s);
int check_pal(char *s, int i, int len);

/* 101-wildcmp.c */
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */
