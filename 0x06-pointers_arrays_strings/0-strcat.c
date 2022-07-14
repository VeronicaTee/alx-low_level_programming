#include "main.h"

/**
 * strcat - Concatenates the string @src points to, including the terminating
 *          null byte, to the end of the string @dest points to.
 * @dest: A pointer to the string to be concatenated.
 * @src: String to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
