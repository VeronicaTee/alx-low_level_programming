#include <stdio.h>
/**
 * main - This function prints out the size on the computer
 * Return: Always zero
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu.\n", sizeof(c));
	printf("Size of an int: %lu.\n", sizeof(i));
	printf("Size of a long int: %lu.\n", sizeof(li));
	printf("Size of a long long int: %lu.\n", sizeof(lli));
	printf("Size of a float: %lu.\n", sizeof(f));
	return (0);
}
