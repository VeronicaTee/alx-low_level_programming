#include <stdio.h>

/**
 * main - Prints the number of arguments passed into prog
 * @argc: Arguments count
 * @argv: Array of argument strings
 * Return: 0 for succesful exitc.
 */

int main(int argc, char *argv[] __atrribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
