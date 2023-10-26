#include "main.h"

/**
* flip_bits - Calculates the number of bits that need to be flipped to
*		transform one number to another.
* @n: The first number.
* @m: The second number.
*
* Description: The program calculates the number of bits that need to
*		be flipped to transform one number into another.
*		It achieves this by calculating the XOR of the two
*		numbers resulting in a value where each bit that
*		differs between n and m, is set to 1.
*		The function then iterates through the XOR result,
*		counting the number of set bits using bitwise AND and
*		right shift.
* Return: Returns the number of bits that need to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
