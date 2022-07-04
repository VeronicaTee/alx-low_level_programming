#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function prints the status of a given number, whether positive or negative
 * Return: Always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("%f%s", n, "is positive");
	else
		printf("%f%s", n, "is negative");

	return (0);
}
