#include <stdio.h>

/**
 * strcat - Concatenates the string @src points to, including the terminating
 *          null byte, to the end of the string @dest points to.
 * @dest: A pointer to the string to be concatenated.
 * @src: String to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

void *_strcat(char *dest, char *src)
{
	int l1, l2, len;

	l1 = l2 = 0;
	while (dest[l1] != '\0')
	{
		l1++;
	}
	while (src[l2] != '\0')
	{
		l2++;
	}
	len = l2;
	l2 = 0;
	while (l2 < len)
	{
		dest[l1] = src[l2];
		l1++;
		l2++;
	}
	return (dest);
}
