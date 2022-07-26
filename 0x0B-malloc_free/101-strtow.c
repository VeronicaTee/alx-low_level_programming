#include "main.h"
#include <stdlib.h>

/**
 * word_count - Count number of words separated by spaces in a string
 * @str: String to check
 *
 * Return: Number of words;
 */
int word_count(char *str)
{
	int count;
	int i;

	i = count = 0;
	while (*(str + i) && *(str + i) != ' ')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * find_words_len - Find length of all the words in a string
 * @str: String to check length of words in it
 *
 * Return: Combined length of words
 */
int find_words_len(char *str)
{
	int index = 0, len = 0, words = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_count(str + index);
		}
	}

	return (words);
}

/**
 * strtow - Split a string into words
 * @str: String to split
 *
 * Return: Return pointer to an array of strings, NULL if it fails
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = find_words_len(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_count(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
