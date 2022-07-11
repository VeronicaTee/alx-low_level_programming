#include "main.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: The string whose length is being returned.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
