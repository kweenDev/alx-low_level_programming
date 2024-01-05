#include "main.h"

/**
* *_memcpy - The function copies the memory area.
* @dest: The destination memory area.
* @src: The memory area to copy from.
* @n: The number of bytes to copy.
*
* Return: A pointer to the destination.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
