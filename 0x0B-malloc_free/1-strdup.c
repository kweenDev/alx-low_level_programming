#include <stdlib.h>
#include "main.h"

/**
* *_strdup - Duplicates a string
* @str: The string to duplicate
*
* Return: Pointer to the duplicated string, or NULL if str is NULL,
* or if malloc fails.
*/
char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;

	while (str[len] != '\0')
		len++;

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
