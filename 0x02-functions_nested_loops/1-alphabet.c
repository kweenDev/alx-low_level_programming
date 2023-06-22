#include "main.h"

/**
* print_alphabet - entry point for program
*
* description: utilizes on the _putchar function to print
* the alphabet a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

/**
* return - exit point
*
* description: termination of the program
*/
