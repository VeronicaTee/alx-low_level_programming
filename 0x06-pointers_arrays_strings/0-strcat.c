#include <stdio.h>
#include "main.h"

/**
 * strcat - Concatenates the string @src points to, including the terminating
 *          null byte, to the end of the string @dest points to.
 * @dest: A pointer to the string to be concatenated.
 * @src: String to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
