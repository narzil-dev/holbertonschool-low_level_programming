
#include "lists.h"

/**
 * list_len - Compte les nœuds d'une liste simplement chaînée
 * @h: Pointeur vers le premier nœud de la liste
 *
 * Return: Nombre total de nœuds
 */
size_t list_len(const list_t *h)
{
	size_t compteur = 0;

	while (h != NULL)
	{
		compteur++;
		h = h->next;
	}

	return (compteur);
}
