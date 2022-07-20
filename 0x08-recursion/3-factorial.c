#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The given number
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (n);
}
