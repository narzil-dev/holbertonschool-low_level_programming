
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars initialized with a character
 * @size: Number of elements in the array
 * @c: Character used to initialize each element
 *
 * Return: Pointer to the array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	tableau = malloc(sizeof(char) * size);
	if (tableau == NULL)
		return (NULL);

	while (i < size)
	{
		tableau[i] = c;
		i++;
	}

	return (tableau);
}
