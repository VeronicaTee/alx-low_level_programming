#include "main.h"

/**
 * get_sqrt - Find the square root
 * @n: Number to find square root of
 * @c: The number checked to see if it's the sqrt of n
 *
 * Return: The square root value
 */
int get_sqrt(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c >= n / 2)
		return (-1);
	return (get_sqrt(n, c + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root, the natural square root of n.
 *         If n does not have a natural square root, -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (get_sqrt(n, root));
}
