#include "main.h"

/**
 * _islower - this function checks if a character is lowercase
 * @c: character to be checked
 *
 * Return: 1 if character is lowercase and 0 if it is not.
 */

int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
