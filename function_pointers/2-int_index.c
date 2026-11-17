
#include "function_pointers.h"

/**
 * int_index - Recherche le premier élément répondant à un critère
 * @array: Tableau d'entiers à parcourir
 * @size: Nombre d'éléments du tableau
 * @cmp: Fonction utilisée pour comparer chaque élément
 *
 * Return: Indice du premier élément trouvé, ou -1 en cas d'échec
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
