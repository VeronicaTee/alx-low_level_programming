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
		printf("%d", n);
	else
		printf("%d", n);

	return (0);
}
