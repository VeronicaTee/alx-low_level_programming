#include "main.h"

/**
 * is_divisible - Checks if a number is a prime number.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Find if a given number is prime
 * @n: Number to be checked
 *
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (is_divisible(n, 2));
	else if (n < 0)
		return (0);
	return (0);
}
