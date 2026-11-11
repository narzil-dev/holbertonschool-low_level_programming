
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory and initializes it to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tableau;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tableau = malloc(nmemb * size);
	if (tableau == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		tableau[i] = 0;
		i++;
	}
	return (tableau);
}
