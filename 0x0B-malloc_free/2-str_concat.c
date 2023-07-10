#include <stdlib.h>
#include "main.h"

/**
* *str_concat - Concatenates two strings
* @s1: The first string
* @s2: The second string
*
* Return: Pointer to the concatenated string (Success),
* or NULL (Error) if s1 or s2 is NULL or if malloc fails.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	char *concat_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	unsigned int i = 0, j = 0;

	while (i < len1)
	{
		concat_str[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}

	concat_str[i] = '\0';

	return (concat_str);
}
