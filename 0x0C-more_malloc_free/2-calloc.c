#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);


	if (ar == NULL)
		return (NULL);

	ar = mem;

	for (i = 0; i < (size * nmemb); i++)
	{
		ar[i] = '\0';

	}
	return (mem);
}
