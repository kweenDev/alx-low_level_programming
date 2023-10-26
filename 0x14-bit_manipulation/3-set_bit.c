#include "main.h"

/**
* set_bit - Sets the value of a bit at a given index.
* @n: Pointer of an unsigned long integer.
* @index: The index of the bit.
*
* Description: This function checks if the index is within the valid
*		range. Then it creates a bitmask with a 1 at the
*		specified index using the left shift operation and
*		performs a bitwise OR operation with *n to set the
*		corresponding bit to 1.
* Return: 1 if it is set, othewrise -1 if it has not.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
