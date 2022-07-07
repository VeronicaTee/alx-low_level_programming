#include <stdio.h>

/**
 * main - this function prints the first 98 Fibonacci numbers starting
 * with 1 and 2, separated by a comma and followed by a space
 *
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long fibn1 = 0, fibn2 = 1, sum;
	unsigned long fibn1_mid1, fibn1_mid2, fibn2_mid1, fibn2_mid2;
	unsigned long mid1, mid2;

	for (count = 0; count < 92; count++)
	{
		sum = fibn1 + fibn2;
		printf("%lu, ", sum);

		fibn1 = fibn2;
		fibn2 = sum;
	}
	fibn1_mid1 = fibn1 / 10000000000;
	fibn2_mid1 = fibn2 / 10000000000;
	fibn1_mid2 = fibn1 % 10000000000;
	fibn2_mid2 = fibn2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		mid1 = fibn1_mid1 + fibn2_mid1;
		mid2 = fibn1_mid2 + fibn2_mid2;
		if (fibn1_mid2 + fibn2_mid2 > 9999999999)
		{
			mid1 += 1;
			mid2 %= 10000000000;
		}

		printf("%lu%lu", mid1, mid2);
		if (count != 98)
			printf(", ");

		fibn1_mid1 = fibn2_mid1;
		fibn1_mid2 = fibn2_mid2;
		fibn2_mid1 = mid1;
		fibn2_mid2 = mid2;

	}
	printf("\n");
	return (0);
