#include "function_pointers.h"

/**
 * array_iterator - Exécute une fonction sur chaque élément d'un tableau
 * @array: Tableau d'entiers à parcourir
 * @size: Nombre d'éléments du tableau
 * @action: Fonction à exécuter sur chaque élément
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
