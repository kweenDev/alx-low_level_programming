#include <stdlib.h>
#include "main.h"

/**
* strtow - Splits a string into words
* @str: The string to be split
*
* Return: Pointer to an array of strings (words),
* or NULL if str is NULL or an empty string
* or if memory allocation fails
*/
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	while (*str != '\0' && i < word_count)
	{
		while (*str == ' ')
			str++;
		word_len = word_length(str);
		words[i] = (char *)malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
		{
			words[i][k] = *str;
			str++;
		}
		words[i][k] = '\0';
		i++;
	}
	words[i] = NULL;

	return (words);
}
