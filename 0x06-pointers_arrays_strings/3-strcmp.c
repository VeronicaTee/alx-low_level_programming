#include <stdio.h>

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of the first unmatched characters.
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	int i, l1, l2;

	i = 0;
	l1 = 0;
	l2 = 0;
	while (s1[l1] != 0)
	{
		l1++;
	}
	while (s2[l2] != 0)
	{
		l2++;
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (l1 > l2)
	{
		return (s1[l2]);
	}
	else if (l1 < l2)
	{
		return (s2[l1] * -1);
	}
	return (0);
}
