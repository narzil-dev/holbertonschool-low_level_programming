
#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int total;
	int *tableau;
	int i = 0;

	if (min > max)
		return (NULL);

	total = (max - min) + 1;
	tableau = malloc(sizeof(int) * total);
	if (tableau == NULL)
		return (NULL);

	while (i < total)
	{
		tableau[i] = min;
		i++;
		min++;
	}
	return (tableau);
}
