#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
* _print_number - prints an integer to stdout
* @n: The number to print
*/
void _print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	if (n > 9)
	{
		_print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}

/**
* _is_digit - checks if a character is a digit
* @c: The character to check
*
* Return: 1 if the character is a digit, 0 otherwise
*/
int _is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
* _parse_number - parse a string and returns the
* number it represents
* @s: The string to parse
*
* Return: The number the string represents
*/
int _parse_number(char *s)
{
	int n = 0, sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (_is_digit(*s))
	{
		n = n * 10 + *s - '0';
		s++;
	}

	return (n *sign);
}

/**
* _mul - multiplies two positive integers
* @a: The first operand
* @b: The second operand
*
* Return: The product of a and b
*/
int _mul(int a, int b)
{
	return (a * b);
}

/**
* main - multiplies two positive numbers
* @argc: The number of arguments passed to the program
* @argv: The array of arguments passed to the program
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	num1 = _parse_number(argv[1]);
	num2 = _parse_number(argv[2]);

	if (num1 < 0 || num2 < 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	res = _mul(num1, num2);
	_print_number(res);
	_putchar('\n');

	return (0);
}
