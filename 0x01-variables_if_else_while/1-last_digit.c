#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function returns a number's last digit
 * Return: Always zero
 */
int main(void)
{
	int n;
	int ldgt;
	int five = 5;
	int six = 6;
	int zero = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (ldgt > 5)
		printf("Last digit of ", n, " is %d%s", ldgt);
	else if (ldgt == 0)
		printf("Last digit of ", n, " is %d%s", ldgt);
	else
		printf("Last digit of ", n, " is %d%s", ldgt);
	
	return (0);
}
