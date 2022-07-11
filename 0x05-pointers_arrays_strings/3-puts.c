#include "main.h"

/**
 * _puts - This function prints a string,
 *		followed bya a new line,
 *		to stdout.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
