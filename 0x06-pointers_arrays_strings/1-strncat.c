#include <stdio.h>
#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: The string being added to
 * @src: The string that is being added
 * @n: Number of chars to print from src
 *
 * Return: Pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
