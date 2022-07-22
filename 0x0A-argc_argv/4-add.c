#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds two numbers and prints the result.
 * @argc: Arguments count
 * @argv: Array of argument strings
 * Return: 0 for success and 1 if params are not 2..
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
