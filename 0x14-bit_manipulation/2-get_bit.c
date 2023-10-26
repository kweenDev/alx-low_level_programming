#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The unsigned long integer.
* @index: The index of the bit
*
* Description: This function first checks the provided index is
*		within the valid range of bits for the given data type.
*		Then it shifts the value of n right by index positions
*		and performs a bitwise AND operation with 1 to
*		extract the value of the bit at the specified index.
* Return: The value of the bit at a given index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
