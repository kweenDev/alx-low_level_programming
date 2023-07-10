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
	if (str == NULL)
		return (NULL);

	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	char *dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	for (unsigned int i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
