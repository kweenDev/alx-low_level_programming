#include "main.h"

/**
* clear_bit - Sets the value of a bit at a given index.
* @n: Pointer of an unsigned long integer.
* @index: The index of the bit.
*
* Description: This program checks the index range and then
* creates a bitmask with a 1 at the specified index using
* the left shift operation.
* It creates a mask with all bits set except the one at the
* specified index.
* Performing a bitwise AND operation with *n using this
* mask clears the targeted bit.
* Return: 1 if its cleared, otherwise -1 if it has not.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
