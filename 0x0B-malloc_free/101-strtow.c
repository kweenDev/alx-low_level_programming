#include <stdlib.h>
#include "main.h"

/**
* count_words - Counts the number of words in a string
* @str: The input string
*
* Return: Number of words in the string
*/
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[io] != '\0')
	{
		while (str[i] != ' ')
			i++;

		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
* **strtow - Splits a string into words
* @str: The input string
*
* Return: Pointer to an array of strings (words), or NULL if str is NULL,
* or empty or if malloc fails.
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
	return (NULL);

int num_words = count_words(str);

char **word_arr = (char **)malloc((num_words + 1) * sizeof(char *));

if (word_arr == NULL)
	return (NULL);

int i = 0;
int word_index = 0;
int word_start = 0;

while (str[i] != '\0')
{
	while (str[i] != ' ')
		i++;

	if (str[i] != ' ')
	{
		word_start = i;

		while (str[i] != ' ' && str[i] != '\0')
			i++;

		int word_len = i - word_start;

		word_arr[word_index] = (char *)malloc((word_len + 1) * sizeof(char));

		if (word_arr[word_index] == NULL)
			for (int j = 0; j < word_index; j++)
				free(word_arr[j]);
			free(word_arr);
			return (NULL);
	}
	int k;

	for (k = 0; k < word_len; k++)
		word_arr[word_index][k] = str[word_start + k];
	word_arr[word_index][k] = '\0';
	word_index++;
}

i++;

}

word_arr[word_index] = NULL;

return (word_arr);
}
