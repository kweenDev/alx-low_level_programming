#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all command-line arguments into a single string
* @ac: The number of command-line arguments.
* @av: The array of arguments.
*
* Return: Pointer to the concatenated string, or NULL if ac is 0 or av is
* NULL, or if malloc fails.
*/
char *argstostr(int ac, char **av)
{
	int total_len = 0;
	int i;
	char *str;
	int index;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int len = 0;

		while (av[i][len] != '\0')
			len++;

		total_len += len;
	}

	str = (char *)malloc((total_len + ac + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int len = 0;

		while (av[i][len] != '\0')
		{
			str[index] = av[i][len];
			index++;
			len++;
		}
		str[index] = '\n';
		index++;
	}

	str[index] = '\0';

	return (str);
}
