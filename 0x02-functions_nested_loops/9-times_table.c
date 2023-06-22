#include "main.h"

/**
* times_table - function that prints the 9 times table
*	starting with 0
*
* Example Table
* 0, 0, 0, 0, ..
* 0, 1, 2, 3, ..
*
* description: prints the 9 times table from 0
*
* Return: Always 0 (success)
*/

void times_table(void)

{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
		u = z % 10;
		d = (z - u) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else
	{
	if (y != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
		_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
/**
* return - exit point
*
* description: termination of the program
*/
