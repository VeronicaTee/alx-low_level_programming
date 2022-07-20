#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string
 * Return: Always zero
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
