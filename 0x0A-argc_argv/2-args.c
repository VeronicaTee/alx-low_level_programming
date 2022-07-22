#include <stdio.h>

/**
 * main - Prints all arguments received
 * @argc: Arguments count
 * @argv: Array of argument strings
 * Return: 0 for succesful exit.
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{

		printf("%s\n", *argv++);
	}
	return (0);
}
