#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The given number
 * Return: The factorial of n
 */

int factorial(int n)
{
	int ret = n;
	if ((n == 0) || (n == 1))
		return 1;
	if (n < 0)
		return -1;
	ret = n * factorial(n - 1);
	return (ret);
}
