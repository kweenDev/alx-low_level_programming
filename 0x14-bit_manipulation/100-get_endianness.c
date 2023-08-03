#include "main.h"

/**
* get_endianness - Checks the endianness of the system.
*
* Description: Examins the memory representation of an
* integer.
* Sets the integer to 1 and then uses a pointer to an
* unsigned char to access the individual bytes of the integer.
* Return: If the least significant byte of the integer is
* equal to 1, it means that the system is little endian.
* Otherwise, it returns 0, indicating that the system is big endian.
*/
int get_endianness(void)
{
	unsigned int num = 1;

	return (*(unsigned char *)&num == 1);
}
